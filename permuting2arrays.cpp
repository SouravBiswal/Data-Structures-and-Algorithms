#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        int i,count=0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        for (i = 0; i < n; i++)
        {
            if (a[i] + b[i] >= k)
                count++;
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
        if(count==n)
        cout << "YES" << endl;
    }
    return 0;
}
