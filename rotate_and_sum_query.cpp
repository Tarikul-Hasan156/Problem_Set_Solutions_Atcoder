//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
// #include <string>
// #include <sstream>
// #include<set>
// #include<iomanip>
// #include<cstring>
// #include<cctype> //islower () issuper () for check the first char
// #include<algorithm>
// #include<cmath>
#define sortarray sort(arr,arr+x);
// #define rev reverse(s1.begin(), s1.end());
// #define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
// #define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
// #define descsort sort(arr, arr + n, greater<int>());
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define maxelementofvector *max_element(digit.begin(),digit.end());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void solve ()
{
    ll x,q;cin>>x>>q;
    vector<ll>vv(x);
    for (auto &x:vv)cin>>x;
    vector<ll>pre(x+1,0);
    for (int i=1;i<=x;i++)
    {
        pre[i]+=pre[i-1]+vv[i-1];
    }
    // for (auto &x:pre)cout<<x<<sp;cout<<endl;
    ll shift=0;
    while (q--)
    {
        ll temp;cin>>temp;
        if (temp==1)
        {
            ll c;cin>>c;
            shift=(shift+c)%x;
        }else
        {
            ll l,r;cin>>l>>r;
             l=((l-1+shift)%x)+1;
             r=((r-1+shift)%x)+1;
            if (l<=r)
            {
                cout<<pre[r]-pre[l-1]<<endl;
            }else
            {
                cout<<(pre[x]-pre[l-1])+pre[r]<<endl;
            }
        }
    }
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