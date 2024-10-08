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

const int MOD = 1e9 + 7;
template<const int mod>
struct mint {
    int val;
    constexpr mint(long long x = 0) : val((x % mod + mod) % mod) {}
    explicit operator int() const { return val; }
    mint& operator+=(const mint &b) { val += b.val; val -= mod * (val >= mod); return *this; }
    mint& operator-=(const mint &b) { val -= b.val; val += mod * (val < 0); return *this; }
    mint& operator*=(const mint &b) { val = 1ll * val * b.val % mod; return *this; }
    mint& operator/=(const mint &b) { return *this *= b.inv(); }
    mint inv() const { int x = 1, y = 0, t; for(int a=val, b=mod; b; swap(a, b), swap(x, y)) t = a/b, a -= t * b, x -= t * y; return mint(x); }
    mint power(int b) const { mint a = *this, res(1); for(; b; a *= a, b /= 2)  if(b & 1) res *= a; return res; }
    mint operator-() const { return val == 0 ? 0 : mod - val; }
    mint& operator++() { val = val == mod - 1 ? 0 : val + 1; return *this; }
    mint& operator--() { val = val == 0 ? mod - 1 : val - 1; return *this; }
    mint operator++(int32_t) { mint before = *this; ++*this; return before; }
    mint operator--(int32_t) { mint before = *this; --*this; return before; }
    friend mint operator+(const mint &a, const mint &b) {return mint(a) += b;}
    friend mint operator-(const mint &a, const mint &b) {return mint(a) -= b;}
    friend mint operator*(const mint &a, const mint &b) {return mint(a) *= b;}
    friend mint operator/(const mint &a, const mint &b) {return mint(a) /= b;}
    friend bool operator==(const mint &a, const mint &b) {return a.val == b.val;}
    friend bool operator!=(const mint &a, const mint &b) {return a.val != b.val;}
    friend bool operator<(const mint &a, const mint &b) {return a.val < b.val;}
    friend istream& operator>>(istream &in, mint &a) {return in >> a.val;}
    friend ostream& operator<<(ostream &os, const mint &a) {return os << a.val;}
};
using Mint = mint<MOD>;
void solve(){
    Mint a;
    int b;
    cin>>a>>b;
    Mint ans=1;
    while(b){
      if(b%2==1){
        (ans*=a);
      }
      (a*=a);
      b/=2;
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