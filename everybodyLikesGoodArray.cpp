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
        int fluctuationCnt=0;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int prev=arr[0]%2;
        for(int i=1;i<n;i++)
        {
            if(prev==arr[i]%2)
                fluctuationCnt++;
            prev=arr[i]%2;
        }
        cout<<fluctuationCnt<<endl;
    }
return 0;
}