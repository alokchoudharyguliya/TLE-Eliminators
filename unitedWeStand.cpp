#include <bits/stdc++.h>
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
using ld = long double;
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
        int n;
        cin >> n;
        int a[n];
        vector<int> c, b;
        int prev;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ordered_map<int,int>mp;
        for(auto i:a)
            mp[i]++;
        if(mp.size()==1)
            cout<<"-1"<<endl;
        else{
            int ele=begin(mp)->first;
            int freq=begin(mp)->second;
            for(int i=0;i<freq;i++)
            {
                
            }
        }
    }
    return 0;
}
