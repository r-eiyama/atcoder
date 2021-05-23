#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N);

    rep(i, N) cin >> A.at(i);
    rep(j, N) cin >> B.at(j);
    rep(k, N) cin >> C.at(k);

    ll result = 0;
    vector<int> cnt(N + 1);

    rep(i, N) cnt.at(A.at(i))++;
    rep(j, N) result += cnt.at(B.at(C.at(j) - 1));
    cout << result << endl;
}