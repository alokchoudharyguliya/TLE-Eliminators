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
        map<int, int> s;
        int n;
        s[-1] = 0;
        s[1] = 0;
        cin >> n;
        int a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            s[a]++;
        }
        if (s[1] >= s[-1])
        {
            if (s[-1] % 2 == 0)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
        else
        {
            int res = s[-1] - s[1];
            if (res % 2 == 0)
            {
                if((s[-1]-res/2)%2==0)
                    cout<<res/2<<endl;
                else
                    cout<<res/2+1<<endl;
            }
            else
            {
                if(((s[-1]-res/2)+1)%2==0)
                    cout<<res/2+1<<endl;
                else
                    cout<<res/2+2<<endl;
                    
            }
        }
    }
    return 0;
}