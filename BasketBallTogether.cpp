#include <bits/stdc++.h>
#define fio                   \
ios_base::sync_with_stdio(0); \
cin.tie(0);                   \
cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll=long long;
using ld=long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
void printVector(vector<int>&arr){
    for(auto it:arr)
    cout<<it<<",";
    cout<<"\n";
}
int main()
{
	fio;
	// int t;
	// cin >> t;
	// while (t--)
	// {
        int n;
        int d;
        cin>>n>>d;
        vector<int>arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cnt=0,teamsize=1;
        sort(arr.begin(),arr.end());
        int left=-1,right=arr.size()-1;
        // printVector(arr);
        while(right>left){
           if(arr[right]*teamsize<=d&&left<right){
            teamsize++,left++;
           }
           else{
            right--,teamsize=1,cnt++;
           }
        }
        cout<<cnt<<"\n";
        // }
        // if we go by the binary search approach as the array has been sorted then, we want the max number of teams so at max we can have N teams, and at min we can have 1 team only
        // can run a loop from 1 to N
        // smaller the number of teams larger the number of teams we can form

	// }
return 0;
}