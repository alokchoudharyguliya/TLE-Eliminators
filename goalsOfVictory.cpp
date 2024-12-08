#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define debug(_) cout<<#_<<" is "<<_<<'\n';
using namespace std;
using ll=long long;
using ld=long double;
const ll mod=1e9+7;
const ll N=2e5+10;
const ll inf=1e9;
const ll linf=1e18;

int main()
{
    fio;
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int arr[n-1];
        for(int i=0;i<n-1;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        cout<<-sum<<endl;
    }
}