#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,k;

    cin>>n>>k;
    
    long arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    
    
    long ans = LONG_MAX;
    for(int i=0;i<n-k+1;i++)
    {
      
       long a = arr[i], b=arr[i];
       for(int j=i;j<i+k;j++)
       {
           a = max(arr[j],a);
           b = min(arr[j],b);
       }

       ans = min(a-b,ans);
    }

    cout<<ans<<endl;
    
    return 0;
}
