#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    string N;
    cin >> N;

    while (*N.rbegin() == '0')
    {
        N = N.substr(0, N.length() - 1);
    }

    string NN = N;

    reverse(NN.begin(), NN.end());

    if (N == NN)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}