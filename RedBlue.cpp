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
        int n, r, b;
        string s="";
        cin >> n >> r >> b;
        int num_red = r / (b + 1);
        int extra_red = r % (b + 1);

        for (int i = 1; i <= b + 1; i++)
        {
            for (int t = 0; t < num_red; t++)
                s += 'R';
            if (extra_red > 0)
            {
                s += 'R';
                extra_red--;
            }
            if (i != b + 1)
                s += 'B';
            }
            cout << s << "\n";
    }
    return 0;
}