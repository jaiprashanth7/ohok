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

void solve(){
    int n,k;
    cin>>n>>k;
    vi a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
   sort(all(a));
   int ans=0;
   int j=0;
   for(int i=0;i<n;i++){
    j=max(j,i);
    while(j+1<n && a[j+1]<=a[j]+1 && a[j+1]<a[i]+k){
        j++;
    }
    ans=max(ans,j-i+1);
   }
   cout<<ans<<endl;



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