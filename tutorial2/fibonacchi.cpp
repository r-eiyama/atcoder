#include <bits/stdc++.h>
using namespace std;

vector<int> memo(50, -1);

int fibo(int num)
{
    if (num == 0)
        return 0;

    if (num == 1)
        return 1;

    if (memo[num] != -1)
        return memo[num];

    return memo[num] = fibo(num - 1) + fibo(num - 2);
}

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << i << " val: " << fibo(i) << endl;
    }
    return 0;
}