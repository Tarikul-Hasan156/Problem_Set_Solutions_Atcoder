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
    vector<ll>vv(x+1,1);
    vv[0]=0;
    ll last=1;
    while (q--)
    {
        ll res=0;
        ll  temp1,temp2;cin>>temp1>>temp2;
        while (last<=temp1)
        {
            res+=vv[last];
            vv[temp2]+=vv[last];
            last++;
        }
        cout<<res<<endl;
        // auto  it=find(vv.rbegin(),vv.rend(),temp1);
        // if (it!=vv.rend())
        // {
        //     ll pos=vv.size()-1-distance(vv.rbegin(),it);
        //     cout<<pos+1<<endl;
        //     for (int i=0;i<=pos;i++){
        //     vv[i]=temp2;
        // }
        // }
        // else cout<<0<<endl;
        // sort(vv.begin(),vv.end());
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