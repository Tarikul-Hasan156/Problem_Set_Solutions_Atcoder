//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    // string s;cin>>s;
    // vector<ll>freq(123,0);
    // for (int i=0;i<s.size();i++){
    //     freq[(int)s[i]]++;
    // }
    // for (int i=97;i<123;i++){
    //     if(freq[i]==0){
    //         cout<<(char)i<<endl;
    //         return;
    //     }
    // }
    string real="abcdefghijklmnopqrstuvwxyz";
    string s;cin>>s;
    set<char>st(s.begin(),s.end());
    vector<char>vv(st.begin(),st.end());
    sort(vv.begin(),vv.end());
    for (int i=0;i<vv.size();i++){
       if (real[i]!=vv[i]){
        cout<<real[i]<<endl;
        return;
       }
    }
    if (vv.size()<25){
        cout<<real[vv.size()]<<endl;
        return;
    }
    cout<<"None"<<endl;
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