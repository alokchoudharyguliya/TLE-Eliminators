#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int diff;
        int ans,minAns=INT_MAX;
        for (int i = 1; i < n; i++)
        {
            diff = arr[i] - arr[i - 1];
            if (diff < 0)
                break;
            else
            {
                if(minAns>diff)
                {
                    minAns=diff;
                }
            }
        }
        (minAns==INT_MAX||diff<0)?cout<<0<<endl:cout<<(minAns/2)+1<<endl;
    }
    return 0;
}