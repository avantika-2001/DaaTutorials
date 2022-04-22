#include<iostream>
#include<math.h>
using namespace std;
void merge(int a[], int lb, int mid, int ub);
void merge_sort(int a[], int lb, int ub)
{
    if(lb<ub)
    {
        int mid = lb + (ub-lb)/2;

        merge_sort(a,lb,mid);
        merge_sort(a,mid+1,ub);

        merge(a,lb,mid,ub);
    }


}

void merge(int a[], int lb, int mid, int ub)
{
    int i= lb;
    int j= mid+1;
    int B[ub-lb+1];
    int k=0;

    while(i<=mid && j<=ub)
    {
        if(a[i]>a[j])
        {
            B[k++]  = a[j++];
        }
        else
        {
            B[k++] = a[i++];
        }
    }

    while(i<=mid)
    {
        B[k++]= a[i++];
    }
    while(j<=ub)
    {
        B[k++] = a[j++];
    }

    for(int i=lb;i<=ub;i++)
    {
        a[i]=B[i-lb];
    }

}

int main()
{
    int a0,a1,n,mod;

    cout<<"Enter A[0] and A[1]:";
    cin>>a0>>a1;

    cout<<"enter size of array: ";
    cin>>n;

    int a[n]={0};
    cout<<"Mod : ";
    cin>>mod;

    a[0] = a0;
    a[1] =a1;
    for(int i=2;i<n;i++)
    {
        a[i] = (a[i-1] + a[i-2]) % mod;
    }

    merge_sort(a,0,n-1);

    int freq=1,force=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            freq++;
        }
        else{
            force+=pow(freq,2);
            freq=1;
        }

    }
    cout<<force<<endl;
}
