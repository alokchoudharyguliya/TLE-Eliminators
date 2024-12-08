#include <bits/stdc++.h>
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll = long long;
using ld = long double;
const ll N = 2e5 + 10;
const ll mod = 1e9 + 7;
const ll inf = 1e9;
const ll linf = 1e18;
void all1s(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<1<<" ";
    }
}
void even2s3s(int n)
{
    while(n>3)
    {
      cout<<2<<" ";
      n-=2;
    }
    cout<<3;
}
void even2s(int n)
{
    while(n>0)
    {
      cout<<2<<" ";
      n-=2;
    }
}
int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << endl;
            cout<<n<<endl;
            all1s(n);
            cout<<endl;
            continue;
        }
        else
        {
            if (n % 2 == 0 && k>=2)
            {
                cout << "YES" << endl;
                cout<<n/2<<endl;
                even2s(n);
                cout<<endl;
                continue;
            }
            else if (n % 2 != 0 && k>2)
            {
                cout << "YES" << endl;
                cout<<n/2<<endl;
                even2s3s(n);
                cout<<endl;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
        }
    }
    return 0;
}