//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;

// struct custom_hash {
//   static uint64_t splitmix64(uint64_t x) {
//       x += 0x9e3779b97f4a7c15ULL;
//       x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9ULL;
//       x = (x ^ (x >> 27)) * 0x94d049bb133111ebULL;
//       return x ^ (x >> 31);
//   }
//
//   size_t operator()(uint64_t x) const {
//       static const uint64_t FIXED_RANDOM =
//           chrono::steady_clock::now().time_since_epoch().count();
//       return splitmix64(x + FIXED_RANDOM);
//   }
// };

void solve ()
{
    int n,m;cin>>n>>m;
    vector<int>vv(n+9);
    for (int i=1;i<=n;i++)cin>>vv[i];
    vector<int>check(m+1,0);
    set<int>se;
    for (int i=0;i<=m;i++)se.insert(i);
    // for (int i=1;i<=m;i++){
    //     int val=vv[i];
    //     if (val>=0 and val<=m)
    //     check[val]++;
    // }
    for (int i=1;i<=m;i++){
        int val=vv[i];
        if (val>=0 and val<=m){
            if (check[val]==0)se.erase(val);
            check[val]++;
        }
    }
    multiset<int>mse;
    mse.insert(*(se.begin()));
    // cout<<*(se.begin())<<endl;
    for (int i=m+1;i<=n;i++){
        int val=vv[i];
        if (val>=0 and val<=m){
            if (check[val]==0)se.erase(val);
            check[val]++;
        }
        int val2=vv[i-m];
        if (val2<=m and val2>=0){
            check[val2]--;
            if (check[val2]==0)se.insert(val2);
        }
        mse.insert(*(se.begin()));
    }
    cout<<*(mse.begin())<<endl;
}

int main ()
{
    speed;
    solve();
    return 0;
}