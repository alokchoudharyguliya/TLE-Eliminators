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
    int t, n;
    cin >> t;
    string s;
    int ans;
    while (t--)
    {
        ans=0;
        int cntDot = 0;
        cin >> n;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '.')
            {
                cntDot=0;
                while (i < n && s[i] == '.')
                {
                    cntDot++;
                    i++;
                }
            if (cntDot > 2)
            {
                ans = 2;
                break;
            }
            else
            {
                ans += cntDot;
            }
            i--;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}