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
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin>>n>>k>>q;
        vector<long long> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] <= q ? a[i] = 1 : a[i] = 0;
        }
        // for(auto i:a)
        // cout<<i;
        long long cnt_1=0;
        long long ways=0;
        // now we have a array of 1s and we want to find the number of 1s in a window
        for(int i=0;i<n;i++){
            if(a[i]==1){
                // cout<<"!";
                cnt_1++;
            }else{
                if(cnt_1>=k){ // only consider if atleast k continuous days are found
                    // cout<<cnt_1;
                    long long diff=cnt_1-k+1;
                    ways+=diff*(diff+1)/2;

                }
                cnt_1=0;
            }
        }
        if(cnt_1>=k)
        {
            long long diff=cnt_1-k+1;
            ways+=diff*(diff+1)/2;
        }
        cout<<ways<<"\n";
    }
    return 0;
}