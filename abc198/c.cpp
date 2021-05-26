#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    double R, X, Y;
    cin >> R >> X >> Y;

    //距離
    double distance = sqrt(X * X + Y * Y);

    //R何回分を考えて、足りない分は切り上げる
    int ans = ceil(distance / R);

    //コーナーケース
    if (ans == 1 && distance != R)
    {
        ans++;
    }

    cout << ans << endl;
}