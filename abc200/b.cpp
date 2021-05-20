#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int64_t n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        if (n % 200 == 0)
        {
            n /= 200;
        }
        else
        {
            n = stoll(to_string(n) += "200");
        }
    }
    cout << n << endl;
}