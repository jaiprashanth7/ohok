#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0);cin.tie(0)

void solve(){
    int n;
    cin>>n;
    vector<int>is0(n+1,0),is1(n+1,0);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(y==0){
            is0[x]=1;
        }
        else is1[x]=1;
    }
    int ans=0;
    for(int i=0;i<=n;i++){
        if(is0[i]&& is1[i]) ans+=n-2;
    }
    for(int i=1;i<n;i++){
        if(is0[i] && is1[i-1] && is1[i+1]) ans++;
        if(is1[i] && is0[i-1] && is0[i+1]) ans++;
    }
    cout<<ans<<endl;
}


signed main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}