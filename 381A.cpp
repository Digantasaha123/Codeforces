#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i]; 
  }
  int left = 0;
  int right = n-1;
  int sum1 =0;
  int taken = n;
  int turn = 0;
    int sum2 =0;
  while (taken!=0)
  {
    if(turn%2==0)
    {
        if(arr[right] > arr[left])
       {
            sum1+=arr[right];
            right--;
        }
        else 
        {
            sum1+=arr[left];
            left++;
        }
    }
    else 
    {
        if(arr[right] > arr[left])
       {
            sum2+=arr[right];
            right--;
        }
        else 
        {
            sum2+=arr[left];
            left++;
        }
    }
    turn++;
    taken--;   
  }
  cout<<sum1<<"    "<<sum2<<endl;
  
    return 0;
}