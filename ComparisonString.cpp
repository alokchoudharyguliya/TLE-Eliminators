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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt=0;
        int cntG=0,cntL=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='>')
            {
                cntG-cntL<=0?cnt+=0:cnt++;
                cntG++;
            }
            else if(s[i]=='<')
            {
                cntL-cntG<=0?cnt+=0:cnt++;
                cntL++;
            }
        }
        cout << cnt+1 << endl;
    }
    return 0;
}

