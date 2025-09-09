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
        long long n, k, B, s;
        cin >> n >> k >> B >> s;

        // sum, B, k,
        // sum-B*k=x;
        // n-1 places left, 10 to be distributed,
        // say 2,2,3,3 all will round to zero
        // 0,0,5,5 will not round to zero
        // so distribute such that the values must be lesser than k,

        // say k*B -> lower limit
        // for perfect divisions k*B but lesser than k*B+n*(k-1) -> upper limit
        // cout<<k*B<<",";
        // cout<<k*B+n*(k-1)<<"\n";

        if (s < (k * B) || s > (k * B) + (n * (k - 1)))
        {
            cout << -1 << "\n";
            continue;
        }
        // single element as k*B other n-1 elements having 0
        long long remaining = s - k * B;
        vector<long long> ans(n, 0);
        ans[0] = k * B;
        for (int i = 0; i < n; i++)
        {
            if (remaining > k - 1)
            {
                ans[i] += k - 1;
                remaining -= k - 1;
            }
            else if (remaining > 0)
            {
                ans[i] += remaining;
                remaining=0;
            }
            else
            {
                break;
            }
        }
        for (auto i : ans)
        {
            cout << i << " ";
            // if (i == 0)
            //     break;
        }
        cout << endl;
    }
    return 0;
}