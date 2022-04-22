#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int a, b;
    cin>>n>>a>>b;
    int cost=a+pow(n,2);
    for(int i=0;i<n;i++)
    {
        int t=n-i;
        int ans=a*pow(i,2)+ b*pow(t,2);
          cost=min(cost,ans);
    }
    cout<<cost<<endl;
    return 0;

}
