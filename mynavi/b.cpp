#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<string> S(N);
    vector<int> T(N);

    for (int i = 0; i < N; i++)
    {
        cin >> S[i] >> T[i];
    }

    int first, second;
    if (T[0] > T[1])
    {
        first = 0;
        second = 1;
    }
    else
    {
        first = 1;
        second = 0;
    }

    for (int i = 2; i < N; i++)
    {
        if (T[i] > T[first])
        {
            int tmp = first;
            first = i;
            second = tmp;
        }
        else
        {
            if (T[i] > T[second])
            {
                second = i;
            }
        }
    }
    cout << S[second] << endl;
    return 0;
}
