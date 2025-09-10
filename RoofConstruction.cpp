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
        int n;
        cin>>n;
        n--;
        // arrange such that the maxiumum XOR of consecutive elements is minimum
        vector<ll>ans;
        ll c=log2(n);
        ll base=pow(2,c)-1;
        while(base>=0){
            // cout<<base;
            ans.push_back(base);
            base--;
        }
        base=pow(2,c);
        while(base<=n){
            ans.push_back(base);
            base++;
        }

        for(auto it:ans)
        cout<<it<<" ";
        cout<<"\n";

    }
return 0;
}