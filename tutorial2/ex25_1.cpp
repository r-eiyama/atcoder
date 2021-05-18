#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    rep(i, N) cin >> A.at(i);

    bool ans = false;

    for (int tmp = 0; tmp < (1 << 20); tmp++)
    {
        bitset<20> s(tmp);

        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            if (s.test(i))
            // N=5の場合,0,1,2,3,4列目が1であるかどうかを判定
            //こうすることで全検索ができる
            {
                sum += A.at(i);
            }
        }
        if (sum == K)
        {
            ans = true;
            break;
        }
    }

    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}