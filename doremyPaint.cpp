#include <bits/stdc++.h>
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << "\n";

using namespace std;
using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
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
        for (int i = 0;i < n; i++)
        {
            cin >> arr[i];
        }
        int k, kSwap;
        k = arr[0] + arr[1];
        kSwap = arr[0] + arr[2];
        for (int i = 1; i < n - 2; i++)
            {if (arr[i] + arr[i + 1] == k)
                continue;
            else if (arr[i] + arr[i + 2] == kSwap)
                swap(arr[i+1],arr[i+2]);
            else
            k=-1;
            break;}
        if(k>0) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
    return 0;
}