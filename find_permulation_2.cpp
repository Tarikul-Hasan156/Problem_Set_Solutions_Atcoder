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
    ll x;cin>>x;
    vector<ll>vv(x),hash(x+1,0);
    vector<bool>check(x+1,true);
    for (int i=0;i<x;i++)
    {
        cin>>vv[i];
        if (vv[i]!=-1)
        {
            hash[vv[i]]++;
            check[vv[i]]=false;
        }
    }
    vector<ll>val;
    for (int i=1;i<=x;i++)
    {
        if (check[i])val.push_back(i);
    }
    // cout<<endl;
    // for (auto &x:val)cout<<x<<sp;cout<<endl;
    for (int i=1;i<=x;i++)
    {
        if (hash[i]>1){cout<<"No"<<endl;return;}
    }
    ll temp=x;
    ll j=0;
    // vector<ll>val(st.begin(),st.end());
    vector<ll>res;
    for (int i=0;i<x;i++)
    {
        if (vv[i]!=-1){res.push_back(vv[i]);}
        else
        {
            res.push_back(val[j]);
            j++;
        }
    }
    cout<<"Yes"<<endl;
    for (int i=0;i<(ll)res.size();i++)
    {
        cout<<res[i]<<sp;
    }
    cout<<endl;
    // vector<ll>vv(x),hash(x+1,0);
    // vector<bool>check(x+1,true);
    // for (int i=0;i<x;i++)
    // {
    //     cin>>vv[i];
    //     if (vv[i]!=-1)
    //     hash[vv[i]]++;
    //     if (vv[i]!=-1)
    //     check[vv[i]]=false;
    // }
    // for (int i=1;i<=x;i++)
    // {
    //     if (hash[i]>1){cout<<"NO"<<endl;return;}
    // }
    // vector<ll>val(x+1,0);
    // for (int i=1;i<=x;i++)
    // {
    //     val[i]=i;
    // }
    // vector<ll>res;
    // ll j=1;
    // for (int i=0;i<x;i++)
    // {
    //     if (vv[i]!=-1){res.push_back(vv[i]);j++;}
    //     else
    //     {
    //         if (check[vv[i]])
    //         {
    //             res.push_back(val[j]);
    //             j++;
    //         }
    //     }
    // }
    // cout<<"Yes"<<endl;
    // for (auto &x:val)cout<<x<<sp;cout<<endl;
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