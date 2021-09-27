#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int p, q;
    cin >> p >> q;
    long int i;
    long int count = 0;
     if(p==1)
        cout << 1 << " ";
    for (i = p; i <= q; i++)
    {
       
        if(i<8)
        continue;
        
       //string x = to_string(i);
       //int digits = x.length();
        long long sq = i * i;
        string s = to_string(sq);
        long int length= s.size();
       string r = s.substr(length/2, length);
       string l = s.substr(0, length/2);

        //string r = s.substr(digits, digits);
        //string l = s.substr(0, digits);


       long int a = stoi(r);
       long int b = stoi(l);
        if (a + b == i)
        {
            count++;
            cout << i << " ";
        }
    }
    if (count == 0)
        cout << "INVALID RANGE";
    return 0;
}
