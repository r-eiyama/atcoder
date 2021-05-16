#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

const int INF = 1001001001;

int H, W;
vector<string> s;
// 入力値をボードと見立てて値を格納
int board[2005][2005];

//探索したか否かの判定
bool visited[2005][2005];
//結果を挿入しておく配列
int memo[2005][2005];

// i縦, j横 計算したい位置
int f(int i, int j)
{
    //右下のマスの場合は動けないので0
    if (i == H - 1 && j == W - 1)
        return 0;
    // 計算したマスにきた場合は格納されている値を返却
    if (visited[i][j])
        return memo[i][j];

    // 特定座標に対し、関数処理が実行されたことを記憶
    visited[i][j] = true;

    int result = -INF;
    //右に進める場合
    if (j + 1 < W)
        result = max(result, board[i][j + 1] - f(i, j + 1));
    if (i + 1 < H)
        result = max(result, board[i + 1][j] - f(i + 1, j));

    return memo[i][j] = result;
}

int main()
{
    cin >> H >> W;
    s.resize(H);
    rep(i, H) cin >> s[i];

    rep(i, H) rep(j, W) board[i][j] = s[i][j] == '+' ? 1 : -1;
    // rep(i, H) rep(j, W) cout << a[i][j] << endl;

    int score = f(0, 0);
    if (score == 0)
        cout << "Draw" << endl;
    if (score < 0)
        cout << "Aoki" << endl;
    if (score > 0)
        cout << "Takahashi" << endl;
    return 0;
}