//CHEF AND PARKING

#include <iostream>
#include <cmath>
#include <cstring>
#include<cstdio>
#include<vector>
#define For(i,n) for(int i=0;(i)<n;i++)
#define mp make_pair
#define pb push_back
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1],indx[n],sorted=0;
        For(i,n){
            cin>>arr[i];
            indx[arr[i]]=i;
            if(arr[i]!=i)sorted++;
        }
        int free=n;
        int i=0,cnt=0,y;
        while(1){
            //cin>>y;
            //For(i,n+1)cout<<arr[i]<<" ";cout<<endl;For(i,n)cout<<indx[i]<<" ";cout<<endl;cout<<sorted;cout<<endl;cout<<endl;
            if(sorted<=0)break;
            if(free<n && arr[free]!=free ){
                arr[free]=arr[indx[free]];
                int x=indx[free];
                indx[free]=free;
                free=x;
                arr[free]=-1;
                sorted--;
                cnt++;
                //indx[free]=
            }
            else if(free==n && sorted!=0 && arr[i]!=i){
                arr[free]=arr[i];
                indx[arr[i]]=free;
                arr[i]=-1;
                free=i;
                i++;
              //  sorted++;
                cnt++;
            }
            else if(arr[i]==i){
                i++;
            }
        }
        cout<<cnt<<endl;
    }
}
