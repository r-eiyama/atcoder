#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    rep(i, n) cin >> a.at(i);

    //200の余剰をリストで管理
    vector<int> cnt(200);
    rep(i, n) cnt[a.at(i) % 200]++;

    ll ans = 0;
    //組み合わせを求める　
    rep(i, 200) ans += (ll)cnt[i] * (cnt[i] - 1) / 2;
    cout << ans << endl;

    return 0;
}