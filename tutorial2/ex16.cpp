#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> A.at(i);
    }

    bool answer = false;
    for (int j = 0; j < A.size() - 1; j++)
    {
        if (A.at(j) == A.at(j + 1))
        {
            answer = true;
        }
    }

    if (answer)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}