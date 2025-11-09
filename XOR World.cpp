//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll a,b;cin>>a>>b;
    ll cnt_b=b+1;
    ll xor_b=0,xor_a=0;
    if (cnt_b%2==0){
        ll pair=cnt_b/2;
        if (pair&1){
            xor_b=1;
        }else xor_b=0;
    }else{
        ll pair=cnt_b/2;
        if (pair&1){
            xor_b=(1^b);
        }else xor_b=b;
    }
    a-=1;
    ll cnt_a=a+1;
    if (a==0){
        xor_a=0;
    }else{
        if (cnt_a%2==0){
            ll pair=cnt_a/2;
            if (pair&1){
                xor_a=1;
            }else xor_a=0;
        }else{
            ll pair=cnt_a/2;
            if (pair&1){
                xor_a=(1^a);
            }else xor_a=a;
        }
    }
    cout<<(xor_b^xor_a)<<endl;
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