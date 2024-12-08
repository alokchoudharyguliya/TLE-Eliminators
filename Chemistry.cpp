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
        string s;
        cin>>s;
        unordered_map<char,int>charCount;
        for(int i=0;i<n;i++)
        charCount[s[i]]++;
        int sum=0;
        for_each(charCount.begin(),charCount.end(),[](auto&count){
            count.second=count.second%2;
        });
        for(auto x:charCount)
        {
            if(x.second%2!=0)
                sum+=x.second;
        }
        if(sum<=k || sum<=k+1)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl; 
    }
return 0;
}