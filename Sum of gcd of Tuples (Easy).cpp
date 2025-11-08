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
    vector<ll>vv(x+1);
    ll ans=0;
    for (int i=1;i<=x;i++){
        for (int j=1;j<=x;j++){
            for (int k=1;k<=x;k++){
                ans+=__gcd(i,__gcd(j,k));
            }
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