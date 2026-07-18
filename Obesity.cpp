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
    int  h, w; cin >> h >> w;
    if ( 10000 * w >= 25 * h * h) {
        cout <<"Yes";
    }else {
        cout << "No";
    }

}

int main ()
{
    speed;
    solve();
    return 0;
}