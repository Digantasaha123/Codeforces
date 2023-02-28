#include<bits/stdc++.h>
using namespace std;
int main()
{ //n=number of events
    int n;
    cin>>n;
    int p=0, c=0, x;
    while(n--)
    {
        cin>>x;
        if(x==-1)
        {
            if (p>0){
                p--;
                
            }
            else c++;
        }
        else p+=x;
    }
    cout<<c<<endl;
    return 0;
}