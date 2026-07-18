//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=2e5+9;
int a[N], b[N];
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] %= 2;
    }
    for (int i = 1; i < n; i++) {
        cin >> b[i];
    }
    int ans = INT_MAX;
    for (int i = 0; i <= 1; i++) {
        vector<int> fl(n + 1);
        fl[1] = i;
        int cnt = i;
        for (int i = 1; i < n; i++) {
            fl[i + 1] = fl[i] ^ a[i] ^ a[i + 1] ^ b[i];
            cnt += fl[i + 1];
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
}

int main ()
{
    speed;
    solve();
    return 0;
}