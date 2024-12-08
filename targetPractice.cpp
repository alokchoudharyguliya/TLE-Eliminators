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
        char arr[10][10];
        int score[5] = {1, 2, 3, 4, 5};
        int res=0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
                cin >> arr[i][j];
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (arr[i][j] == 'X')
                {
                    if (i == 0 || j == 0 || i == 9 || j == 9)
                    {
                        res+=score[0];
                    }
                    else if (i == 1 || j == 1 || i==8 ||j==8)
                    {
                        res+=score[1];
                    }
                    else if (i == 2 || j == 2 || i==7 || j==7)
                    {
                        res+=score[2];
                    }
                    else if (i == 3 || j == 3 || i==6 ||j==6)
                    {
                        res+=score[3];
                    }
                    else{
                        res+=score[4];
                    }
                }
                else{
                    ;
                }
            }
        }
            cout <<res<< '\n';
    }
    return 0;
}