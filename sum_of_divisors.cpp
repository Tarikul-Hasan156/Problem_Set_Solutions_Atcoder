//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
const ll N=1e7;
vector<ll>vv(N+1);
vector<ll>pre(N+1);
void solve ()
{
    ll x;cin>>x;
    cout<<pre[x]<<endl;
}
int main ()
{
    speed;
    for (int i=1;i<=N;i++){
        for (int j=i;j<=N;j+=i){
            vv[j]++;
        }
    }
    for (int i=1;i<=N;i++){
        vv[i]=vv[i]*i;
    }
    pre[1]=vv[1];
    for (int i=2;i<=N;i++){
        pre[i]+=vv[i]+pre[i-1];
    }
    // int tt;
    // cin>>tt;
    // while (tt--)
    // {
        solve ();
    // }
    return 0;
}