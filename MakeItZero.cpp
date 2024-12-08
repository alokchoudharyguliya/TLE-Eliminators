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
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int X = arr[0];
        if (n % 2 == 0)
        {
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }
        else
        {
            cout << 4 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << 2 << " " << n << endl;
            cout << 2 << " " << n << endl;
        }
    }
    return 0;
}

// for(int i=1;i<n;i++)
//     X=X^arr[i];
// for_each(arr.begin(),arr.end(),[X](int &val){
//     val=X;
// });
// X=arr[0];
// for(int i=1;i<n;i++)
//     X=X^arr[i];
// for_each(arr.begin(),arr.end(),[X](int &val){
//     val=X;
// });