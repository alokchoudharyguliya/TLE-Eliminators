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
        unordered_set<char> uniq_pre;
        unordered_set<char> uniq_suf;
        vector<int> pre(n, 0);
        vector<int> suf(n, 0);
        for (int i = 0; i < n; i++)
        {
            uniq_pre.insert(s[i]);
            pre[i] = uniq_pre.size();
            // cout<<pre[i]<<",";
        }
        // cout<<"\n";
        for (int i = n - 1; i >= 0; i--)
        {
            uniq_suf.insert(s[i]);
            suf[i] = uniq_suf.size();
            // cout<<suf[i]<<",";
        }

        int ans = 0;
        for (int i = 0; i < n-1; i++)
        {
            ans = max(pre[i] + suf[i+1], ans);
            // cout<<pre;
        }
        cout << ans << "\n";
    }
    return 0;
}

// paiumoment
//    1234566789
//    9876554321