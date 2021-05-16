#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A(3);
    cin >> A[0] >> A[1] >> A[2];

    sort(A.begin(), A.end());
    string answer = "No";

    if (A[2] - A[1] == A[1] - A[0])
    {
        answer = "Yes";
    }
    cout << answer << endl;
}