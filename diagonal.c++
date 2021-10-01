#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);


    freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (abs(x + y) % 2 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }