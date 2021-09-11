#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x, y, z, p=0, q=0, r=0;
    while (n--)
    {
        cin >> x >> y >> z;
        p += x;
        q += y;
        r += z;
    }
    if (p == 0 && q == 0 && r == 0)
        cout << "YES";
    else
        cout << "NO";
}