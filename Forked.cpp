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
        int a, b,cnt=0;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;
        set<pair<int, int>> kingPos;
        set<pair<int, int>> queenPos;

        kingPos.insert({xk - a, yk - b});
        queenPos.insert({xq - a, yq - b});

        kingPos.insert({xk + a, yk - b});
        queenPos.insert({xq + a, yq - b});

        kingPos.insert({xk - a, yk + b});
        queenPos.insert({xq - a, yq + b});

        kingPos.insert({xk + a, yk + b});
        queenPos.insert({xq + a, yq + b});

        kingPos.insert({xk - a, yk + b});
        queenPos.insert({xq - a, yq + b});
        
        swap(a,b);

        kingPos.insert({xk - a, yk - b});
        queenPos.insert({xq - a, yq - b});

        kingPos.insert({xk + a, yk - b});
        queenPos.insert({xq + a, yq - b});

        kingPos.insert({xk - a, yk + b});
        queenPos.insert({xq - a, yq + b});

        kingPos.insert({xk + a, yk + b});
        queenPos.insert({xq + a, yq + b});

        kingPos.insert({xk - a, yk + b});
        queenPos.insert({xq - a, yq + b});
        
        for(auto &i:kingPos)
        {
            if(queenPos.find(i)!=queenPos.end())
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}