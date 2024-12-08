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
        int n;
        cin >> n;
        int arr[n];
        int ans = 1;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            ans *= arr[i];
        // cout<<sqrt(ans)<<endl;
        int res = 1;
        if (sqrt(ans) - floor(sqrt(ans)) == 0)
        {
            int i=0;
            res=1;
            while (res != sqrt(ans))
            {
                res *= arr[i];
                i++;
            }
            if(i==0)cout<<"1"<<endl;
            else cout << i << endl;
        }
        else
            cout << "-1" << endl;
    }
    return 0;
}