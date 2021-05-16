#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    map<int, int> frequent;
    for (int i = 0; i < n; i++)
    {
        if (frequent.count(a.at(i)))
        {
            frequent[a.at(i)] += 1;
        }
        else
        {
            frequent[a.at(i)] = 1;
        }
    }

    int max_count = 0;
    int answer = -1;

    for (int x : a)
    {
        if (max_count < frequent.at(x))
        {
            max_count = frequent.at(x);
            answer = x;
        }
    }

    cout << answer << " " << max_count << endl;
}