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
        int n,p;
        cin>>n>>p;
        vector<int>nP(n),cost(n);
    for(auto i:nP)
        cin>>i;
    for(auto i:cost)
        cin>>i;
    vector<pair<int,int>>paired(n);
    for(int i=0;i<n;i++)
        piared.emplace_back(cost[i],nP[i]);
    }
    sort(nP.begin(),nP.end());
    for(auto i:paired)
        cout<<i.first<<" ";
return 0;
}