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
        int n, x;
        cin >> n >> x;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // v will lie in -x+a[i] to x+a[i]
        int cnt = 0;
        vector<pair<int, int>> vRange;
        for (int i = 0; i < n; i++)
            vRange.push_back({-x + a[i], x + a[i]});
        int low = INT_MIN;
        int high = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (vRange[i].first > high || vRange[i].second < low)
            {
                
                high = vRange[i].second;
                low = vRange[i].first;
                cnt++;
            }
                low = max(vRange[i].first, low);
                high = min(vRange[i].second, high);
        }
        cout << cnt;
        cout << "\n";
    }
    return 0;
}