//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
const ll Mod=1e9+7;     
void solve ()
{
    ll x;cin>>x;
    vector<ll>vv(x+1,0);
    for(int i=1;i<=x;i++)cin>>vv[i];
    vector<ll>pre(x+1,0);
    for (int i=1;i<=x;i++){
        pre[i]=((pre[i-1]%Mod)+(vv[i]%Mod))%Mod;
    }
    ll sum=0;
    for (int i=2;i<=x;i++){
        ll temp=((pre[i-1]%Mod)*(vv[i]%Mod))%Mod;
        sum+=(temp%Mod);
    }
    cout<<(sum%Mod)<<endl;
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