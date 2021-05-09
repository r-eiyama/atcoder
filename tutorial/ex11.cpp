#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, result;
    cin >> N >> A;

    result = A;

    // ここにプログラムを追記
    for (int i = 0; i < N; i++)
    {
        int B;
        string op;
        cin >> op >> B;

        if (op == "+")
        {
            result += B;
        }
        else if (op == "-")
        {
            result -= B;
        }
        else if (op == "*")
        {
            result *= B;
        }
        else if (op == "/")
        {
            if (B != 0)
            {
                result /= B;
            }
            else
            {
                cout << "error" << endl;
                break;
            }
        }
        cout << i + 1 << ":" << result << endl;
    }
}
