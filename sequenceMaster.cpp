#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false); \
cin.tie(0); \
cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << "\n";
using namespace std;
using ll = long long;
using ld = long double;
const ll mod = 1e9+7;
const ll N = 2e5+10;
const ll inf = 1e9;
const ll linf = 1e18;

int main()
{
    fio;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        vector<int>ansArr;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ansArr.push_back(arr[0]);
        for(int i=1;i<n;i++)
        {
            ansArr.push_back(arr[i]);
            if(arr[i-1]>arr[i])
            {
                ansArr.push_back(arr[i]);
            }
        }
        cout<<ansArr.size()<<endl;
        for(int i=0;i<ansArr.size();i++)
        {
            cout<<ansArr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}