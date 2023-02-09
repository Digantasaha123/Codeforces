#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        string str;
        int a;
        cin >> a ;
        cin>> str;
        for (int i = 0; i < a; i++)
        {
            if (i == 0)
            {

                if (str[i] == '1')
                {
                    count++;
                }
            }
            else
            {
                if (str[i] == '1')
                {
                    count++;

                    if ((count % 2) == 0)
                    {
                        cout << '-';
                    }
                
                    else
                        cout << '+';
                }
                
                else cout << '+';
            }
            }

            cout << endl;
        }
        return 0;
    }