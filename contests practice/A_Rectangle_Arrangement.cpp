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
#define S second
#define ll int
#define MAXN 202020
const int mod=1e9+7;

void solve(){
    int n,m;
    cin>>n>>m;
    int cnt=0;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        int point=(r-l);
        cnt+=l+point;
        cnt+=point;
        if(m>r) cnt+=(m-r);
        
    }
    
    cout<<cnt<<endl;

}

 
 
int32_t main(){
      fast;
      int t=1;
      
    //  cin>>t;
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