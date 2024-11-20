#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define int long long 
#define fast ios::sync_with_stdio(0);cin.tie(0)
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define pb push_back
#define mp make_pair
#define F first
#define INF 1000000000
#define S second
#define ll int
#define mt make_tuple
#define vi vector<int>
#define fav(tmp, x) for (auto tmp : x)
#define MAXN 202020
const int mod=1e9+7;

class DSU{
    public:
    vector<int>par,rank;
    DSU(int n){
        par.resize(n+1);
        rank.resize(n+1,0);
        for(int i=0;i<=n;i++){
            par[i]=i;
        } 
    }
    int find(int x){
            if(x==par[x]) return x;
            return par[x]=find(par[x]);
        }
        void join(int x,int y){
            x=find(x);
            y=find(y);
            if(x!=y){
                par[x]=y;
                rank[y]+=rank[x];
            }
        }
};


void solve(){
    int n,m;
    cin>>n>>m;
    DSU ds(n);
    for(int i=0;i<m;i++){
        int a,d,k;
        cin>>a>>d>>k;
        for(int j=0;j<=k;i++){
            int x=a+d*j;
            ds.join(x,a);
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(ds.par[i]==i){
            cnt++;
        }
    }
    cout<<cnt<<endl;

}

 
 
int32_t main(){
      fast;
      int t=1;
      
     cin>>t;
      while(t--){
       solve();
      }
   
 return 0;
}
 
    
/*even hai tho ,n(XOR)1 ,n^1 = n+1;
odd hai tho n^1= n-1;*/
  // ewven hai tho , n&1= 0 ayega
        // odd hai tho n&1= 1 ayega 
//jab right shift (n) jo vo n/2 ho jata hai , (n>>1);
//jab left shift karte of n , tab vo n*2 ho jata hai (n<<1);
// lowercae to uppercase: using AND &
// 'c'=lowercase,'_'=underscore, 'C'=uppercase 
//'c'& '_' = capital C
//uppercase to lowercase,using OR |
// ' '=space, |=or
//'C' | ' '= upercase c