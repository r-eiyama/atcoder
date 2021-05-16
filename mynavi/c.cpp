#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    // 全検索で求めてみる
    int answer = 0;
    for (int i = 0; i <= 9999; i++)
    {
        vector<bool> flag(10);
        int x = i;
        //0~9の配列を作成し、出現した値を配列に保存する
        // ex 2034の場合は,0,2,3,4のキー部分の値を1にする
        for (int j = 0; j < 4; j++)
        {
            //xの10の余剰[0~9をとる]
            int d = x % 10;
            flag[d] = true;
            x /= 10;
        }
        bool ok = true;
        for (int j = 0; j < 10; j++)
        {
            if (S[j] == 'o' && !flag[j])
                ok = false;

            if (S[j] == 'x' && flag[j])
                ok = false;
        }
        answer += ok;
    }
    cout << answer << endl;
}
