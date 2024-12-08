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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        int cnt = 1;
        int maxCnt=1;
        if (n > 1)
        {
            for (int i = 1; i < n; i++)
            {
                if (arr[i] - arr[i - 1] <= k)
                    cnt++;
                else
                    cnt = 1;
                maxCnt=max(cnt,maxCnt);
            }
            cout << n - maxCnt << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}