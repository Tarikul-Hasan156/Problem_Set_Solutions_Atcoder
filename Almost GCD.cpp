//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x;cin>>x;
    vector<ll>vv(x);
    for (auto &x:vv)cin>>x;
    vector<ll>check(10005,0);
    for (int i=0;i<x;i++){
        check[vv[i]]++;
    }
    ll mx=LLONG_MIN;
    ll ans=1;
   for (int i=2;i<=1e3;i++){
        ll cnt=0;
        for (int j=i;j<=1000;j+=i){
            cnt+=check[j];
        }
        if (cnt>=mx){
            mx=cnt;
            ans=i;
        }
   }
   cout<<ans<<endl;
   
}
int main ()
{
    speed;
    // int tt;
    // cin>>tt;
    // while (tt--)
    // {
        solve ();
    // }
    return 0;
}