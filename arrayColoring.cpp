#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << "\n";
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,cntOdd=0;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
                continue;
            else
                cntOdd++;
        }
        if(cntOdd%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}