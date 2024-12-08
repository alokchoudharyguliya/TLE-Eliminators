#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0); \
    cin.tie(0);                          \
    cout.tie(0);
#define debug(_) cout<<#_<<" is "<<_<<"\n";

using namespace std;
using ll=long long;
using ld=long double;
const ll mod =1e9+7;
const ll N=2e5 + 10;
const ll inf=1e9;
const ll linf=1e18;
void swap(int &a, int &b)
{
    int temp;
    temp=b;
    b=a;
    a=temp;
};
bool is_sorted(vector<int> arr)
{
    int prev=arr[0];

    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]>=prev)
        continue;
        else return false;
        prev=arr[i];
    }
        return true;
}
int main()
{
    fio;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=2;i<n-1;i++)
        {

            if(arr[i-1]<arr[i] && arr[i+1]<arr[i])
                swap(arr[i],arr[i+1]);
        }
        // for(auto it:arr)
        // cout<<it<<'\n';
        if(is_sorted(arr))
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
        
    }
    return 0;
}