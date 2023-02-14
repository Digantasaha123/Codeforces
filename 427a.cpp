#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int crime = 0;
     int array[t];
     for(int i=0; i<t; ++i)
     {
        cin>>array[i];
     }
     if(array[0]==-1) crime++;
     for(int i=2; i<t; i++)
     {
        
        if (array[i]==-1 && array[i-1]==-1) crime++;
     }
     cout<<crime<<endl;
    return 0;
}