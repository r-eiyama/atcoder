#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, S;
    cin >> N >> S;
    vector<int> A(N), P(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }
    for (int i = 0; i < N; i++)
    {
        cin >> P.at(i);
    }

    int result = 0;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < P.size(); j++)
        {
            int total = A.at(i) + P.at(j);
            if (total == S)
            {
                result++;
            }
        }
    }
    cout << result << endl;

    // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
    // ここにプログラムを追記
}
