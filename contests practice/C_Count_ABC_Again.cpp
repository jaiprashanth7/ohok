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
    int n,q;
    cin>>n>>q;
    string a;
    cin>>a;
    int cnt=0;
    for(int i=0;i<n-2;i++){
        if(a[i]=='A' && a[i+1]=='B' && a[i+2]=='C'){
            cnt++;
        }
    }
    while(q--){
       int i;
       char c;
       cin>>i>>c;
       i--;
       if(i-2>=0){
        if(a[i-2]=='A'){
            if(a[i-1]=='B'){
                if(a[i]=='C'){
                    cnt--;
                }
                if(c=='C'){
                    cnt++;
                }
            }
        }
       }
       if(i-1>=0){
        if(a[i-1]=='A'){
            if(a[i+1]=='C'){
                if(a[i]=='B'){
                    cnt--;
                }
                if(c=='B'){
                    cnt++;
                }
            }
        }
       }
       if(i+2<n){
        if(a[i+2]=='C'){
            if(a[i+1]=='B'){
                if(a[i]=='A'){
                    cnt--;
                }
                if(c=='A')cnt++;
            }
        }
       }
        cout<<cnt<<endl;
        a[i]=c;
    
    }

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