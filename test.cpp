#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll one = 0, y;
    int x;
    cin >> x;
    string s;
    while (x--)
    {
        cin >> y;
        cin >> s;
        for (int i = 0; i < y; i++)
        {
            if (i == 0)
            {
                if (s[i] == '1')
                {
                    one++;
                }
            }
            else
            {
                if (s[i] == '1')
                {
                    one++;
                    if ((one % 2) == 0)
                        cout << "-";
                    else
                        cout << '+';
                }
                else
                    cout << '+';
            }
        }
        cout << endl;
    }
    return 0;
}