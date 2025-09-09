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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> pref(n+1,0);
        for (int i = 0; i < n; i++)
        {
            pref[i + 1] = pref[i] + (s[i] == 'W');
        }
        ll min_cells=INT_MAX;
        for(int i=0;i<=n-k;i++){
            ll diff=pref[i+k]-pref[i];
            min_cells=min(min_cells,diff);
        }
        cout<<min_cells<<"\n";
    }
    return 0;
}