#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{

    string S;
    cin >> S;

    reverse(S.begin(), S.end());

    for (int i = 0; i < S.size(); i++)
    {
        if (S.at(i) == '6')
        {
            S.at(i) = '9';
        }
        else if (S.at(i) == '9')
        {
            S.at(i) = '6';
        }
    }

    cout << S << endl;
}