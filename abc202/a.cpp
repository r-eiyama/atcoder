#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{

    vector<int> N(3);

    rep(i, 3) cin >> N.at(i);

    int result = 0;

    for (int i = 0; i < 3; i++)
    {
        if (N.at(i) == 1)
        {
            result += 6;
        }
        else if (N.at(i) == 2)
        {
            result += 5;
        }
        else if (N.at(i) == 3)
        {
            result += 4;
        }
        else if (N.at(i) == 4)
        {
            result += 3;
        }
        else if (N.at(i) == 5)
        {
            result += 2;
        }
        else if (N.at(i) == 6)
        {
            result += 1;
        }
    }

    cout << result << endl;
}