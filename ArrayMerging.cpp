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
        vector<long long> a(n, 0), b(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        vector<long long> A(2*n+1,0);
        vector<long long> B(2*n+1,0);

        long long cnt = 1;
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1])cnt++;
            else{
                A[a[i-1]]=max(A[a[i-1]],cnt);
                cnt=1;
            }
        }
        A[a[n-1]]=max(A[a[n-1]],cnt);
        cnt = 1;
        for(int i=1;i<n;i++)
        {
            if(b[i]==b[i-1])cnt++;
            else{
                B[b[i-1]]=max(B[b[i-1]],cnt);
                cnt=1;
            }
        }
        B[b[n-1]]=max(B[b[n-1]],cnt);
        int i=1;
        cnt=0;
        while(i<2*n+1){
            cnt=max(cnt,A[i]+B[i]);
        i++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}