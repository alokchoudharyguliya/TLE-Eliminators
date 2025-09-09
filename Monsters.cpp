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
        // k=3
        // 2 8 3 5
        // 2 6 3 5
        // 2 4 3 5
        // 2 4 3 3
        // 2 2 3 3
        // 2 2 1 1
        // 0 2 1 1
        // 0 0 1 1
        // 0
        // 2 2 3 2
        // 3 1 2 4
        // sort with indexes
        int n, k;
        cin >> n >> k;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            a[i] = a[i] % k;
            if (!a[i])
                a[i] = k;
        }
        vector<pair<int,int>>mp;
        for (int i = 0; i < n; i++)
        {
            mp.push_back({a[i],i});
        }
        sort(mp.begin(),mp.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            if(a.first==b.first)
            return a.second<b.second;
            return a.first>b.first;
        });
        for(auto it:mp)
        cout<<it.second+1<<" ";
        cout<<"\n";
    }
    return 0;
}