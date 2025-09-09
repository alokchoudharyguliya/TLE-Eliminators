#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        // use unique char number 
        int ans=0;
        vector<int>pre(n,0);
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
            pre[i]=st.size();
        }
        st.clear();
        vector<int>suff(n,0);
        for(int i=n-1;i>=0;i--){
            st.insert(s[i]);
            suff[i]=st.size();
        }
        for(int i=0;i<n-1;i++){
            ans=max(ans,pre[i]+suff[i+1]);
        }
        cout<<ans<<"\n";
    }
}