//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;

// struct custom_hash {
//   static uint64_t splitmix64(uint64_t x) {
//       x += 0x9e3779b97f4a7c15ULL;
//       x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9ULL;
//       x = (x ^ (x >> 27)) * 0x94d049bb133111ebULL;
//       return x ^ (x >> 31);
//   }
//
//   size_t operator()(uint64_t x) const {
//       static const uint64_t FIXED_RANDOM =
//           chrono::steady_clock::now().time_since_epoch().count();
//       return splitmix64(x + FIXED_RANDOM);
//   }
// };
int power (int n, ll a, int mod){
    n%=mod;
    int ans=1%mod;
    while (a){
        if (a&1){
            ans=1LL*ans*n%mod;
        }
        n=1LL*n*n%mod;
        a>>=1;
    }
    return ans;
}
int solve2(int a,ll x, int mod){
    if (x==0)return 1%mod;
    ll p=x/2;
    if (x&1){
        int cur=solve2(a,p,mod);
        return (cur+1LL*power(a,p+1,mod)*cur%mod)%mod;
    }else{
        int cur=(solve2(a,x-1,mod)+power(a,x,mod))%mod;
        return cur;
    }
}
void solve ()
{
    int a,m;
    ll x;cin>>a>>x>>m;
    cout<<solve2(a,x-1,m)<<endl;

}

int main ()
{
    speed;
    solve();
    return 0;
}