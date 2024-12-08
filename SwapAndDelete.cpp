#include <bits/stdc++.h>
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int res = 0;
        int cnt1 = count(s.begin(), s.end(), '1');
        int cnt0 = count(s.begin(), s.end(), '0');
        // cout<<cnt1<<" "<<cnt0<<endl;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                if (cnt1 > 0)
                    cnt1--;
                else
                    break;
            else if (s[i] == '1')
                if (cnt0 > 0)
                    cnt0--;
                else
                    break;
        }
        cout << cnt1 + cnt0 << endl;
    }
    return 0;
}