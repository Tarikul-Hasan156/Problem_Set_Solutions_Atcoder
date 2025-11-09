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
    if (x==1)cout<<0<<endl;
    else{
        ll even=0,odd=0;
        if (x&1){
            even=(x-1)/2;
            odd=even+1;
        }else{
            even=x/2;
            odd=even;
        }
        cout<<2*even*odd*1LL<<endl;
    }
}
int main ()
{
    speed;
    int tt;
    cin>>tt;
    while (tt--)
    {
        solve ();
    }
    return 0;
}