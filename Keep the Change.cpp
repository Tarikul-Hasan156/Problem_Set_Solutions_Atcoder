//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;

void solve ()
{
    int t; cin >> t;
    ll ans = 0;
    while (t--) {
        int x, y;
        string s; cin >> x >> y >> s;
        if (s == "keep"){
            ans += y-x;
        }
    }
    cout << ans << endl;
}

int main ()
{
    speed;
    solve();
    return 0;
}