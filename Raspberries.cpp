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
int count_of(vector<int> &arr)
{
    return count_if(arr.begin(), arr.end(), [](int val)
                    { return val % 2 == 0; });
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (any_of(arr.begin(), arr.end(), [k](int val)
                   { return val % k == 0; }))
            cout << "0" << endl;
        else
        {
            if (k == 4)
            {
                if (any_of(arr.begin(), arr.end(), [](int val)
                           { return val % 4 == 0; }) ||
                    count_of(arr) >= 2)
                {
                    cout << "0" << endl;
                }
                else if (count_of(arr) == 1)
                {
                    cout << "1" << endl;
                }
                else
                {
                    for_each(arr.begin(), arr.end(), [](int &val)
                             { val %= 4; });
                    cout << ((*max_element(arr.begin(), arr.end()) == 1) ? "2" : "1") << endl;
                }
            }
            else
            {
                for_each(arr.begin(), arr.end(), [k](int &val)
                         { val % k != 0 ? val = k - (val % k) : val = 0; });
                cout << *min_element(arr.begin(), arr.end()) << endl;
            }
        }
    }
    return 0;
}