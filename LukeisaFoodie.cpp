#include <bits/stdc++.h>
#define fio                   \
ios_base::sync_with_stdio(0); \
cin.tie(0);                   \
cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll=long long;
using ld=long double;
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
        int n,x;
        cin>>n>>x;
        vector<int>a(n,0);
        for(int i=0;i<n;i++)
            cin>>a[i];
        // v will lie in -x+a[i] to x+a[i]
        vector<pair<int,int>>vRange;
        for(int i=0;i<n;i++)
        vRange.push_back({-x+a[i],x+a[i]});

        for(int i=0;i<n;i++)
        {
            cout<<vRange[i].first<<","<<vRange[i].second;
            cout<<"\n";
        }
        cout<<"\n";
        
    }
return 0;
}