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
        long long n;
        cin>>n;
        long long ans_a=1;
        long long ans_b=n-1;
        for(long long i=2;i*i<=n;i++){
            if(!(n%i)){
                ans_a=n/i;
                ans_b=n-ans_a;
                break;
            }
        }
        cout<<ans_a<<" "<<ans_b<<"\n";
    }
return 0;
}