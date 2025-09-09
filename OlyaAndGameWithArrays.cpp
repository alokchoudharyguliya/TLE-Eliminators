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
        vector<int> m(n, 0);

        // for(int i=0;i<n;i++)
        // cin>>m[i];
        // cout<<"Hey";
        vector<vector<int>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
            a[i].resize(m[i]);
            for (int j = 0; j < m[i]; j++)
                cin >> a[i][j];
            sort(a[i].begin(), a[i].end());
        }
        long long sum = 0;
        int smallest = 0;
        for (int j = 0; j < n; j++)
        {
            // cout<<a[0][smallest];
            if (a[smallest][1] > a[j][1])
                smallest = j;
        }
        // cout<<"Hey";
        for (int i = 0; i < n; i++)
        {
            if (smallest == i)
                continue;
            a[smallest].push_back(a[i][0]);
        }
        sort(a[smallest].begin(), a[smallest].end());
        for (int j = 0; j < n; j++)
        {
            if(j==smallest)
                continue;
            sum += a[j][1];
            
        }
        cout << sum + a[smallest][0] << "\n";
    }
    return 0;
}



// find the smallest second element
// dump the first elements into that particular dump list