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
    int l=0,r=n;
    while(l+1<r){
        int m=(l+r)/2;
        int s1=(m)*(m-1)/2 +k*m;
        int s2=k*(n-m) + n*(n-1)/2 -(m*(m-1))/2;
        if(s1<s2){
            l=m;
        }else{
            r=m;
        }
    }
    int s1=l*(l-1)/2 +k*l;
    int s2=n*(n-1)/2 +k*(n-l) -l*(l-1)/2;
    int s3=k*r + r*(r-1)/2;
    int s4=k*(n-r) + n*(n-1)/2 -r*(r-1)/2;
    cout<<min(abs(s2-s1),abs(s3-s4))<<endl;

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