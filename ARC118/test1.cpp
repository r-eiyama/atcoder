#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, N;
    cin >> t >> N;

    int i = 1;
    int count = 0;

    while (true)
    {
        int k, m;
        //計算式
        k = (100 + t) * i / 100;
        //一つ進んだ計算式
        m = (100 + t) * (i + 1) / 100;

        if ((m - k) != 1)
        {
            count++;

            if (count == N)
            {
                cout << m - 1 << endl;
                break;
            }
        }

        i++;
    }
}