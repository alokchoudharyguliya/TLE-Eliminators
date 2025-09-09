// shuffling must be within a group having all same numbers, that is performing cyclic rotation
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
        vector<ll> arr(n, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
            mp[arr[i]]++;
        ll flag = 0;
        for (auto i : mp)
        {

            // cout<<i.second<<",";
            if (i.second == 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << -1 << "\n";
            continue;
        }
        vector<ll> students(n);
        for (int i = 0; i < n; i++)
            students[i] = i + 1;

        ll l = 0, r = 0;
        while (r < n)
        {
            if (arr[l] == arr[r])
                r++;
            else
            {
                rotate(students.begin() + l, students.begin() + l + 1, students.begin() + r);
                // rotate(students.begin() + l, students.begin() + r - l - 2, students.begin() + r);
                l = r;
            }
        }
        rotate(students.begin() + l, students.begin() + l + 1, students.begin() + r);
        // rotate(students.begin() + l, students.begin() + r - l - 2, students.begin() + r);
        for (auto i : students)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}