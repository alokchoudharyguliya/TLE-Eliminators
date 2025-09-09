// find the decreasing subarray length and if it is greater than k then noInterrupts();
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
        int n,k;
        cin>>n>>k;
        vector<int>arr(n,0);
        for(int i=0;i<n;i++)cin>>arr[i];
        int maxLen=0,cnt=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                cnt++;
            }
            else{
                maxLen=max(cnt,maxLen);
                cnt=0;
            }
        }
if (maxLen == 0) {
    cout << "YES\n";
    continue;
}
        maxLen=max(cnt,maxLen)+1;
        // cout<<maxLen<<"\n";

        k>=maxLen?cout<<"YES"<<"\n":cout<<"NO"<<"\n";
    }
return 0;
}