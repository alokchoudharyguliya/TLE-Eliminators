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
        int n;
        cin >> n;
        int arr[n];
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        temp=abs(arr[0]);
        for (int i = 0; i < n; i++)
        {
            if (temp > abs(arr[i]))
                temp = abs(arr[i]);
        }
        cout << temp;
    return 0;
}