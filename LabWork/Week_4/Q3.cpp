#include <iostream>
#include <cstdlib>
using namespace std;
int Partition(int*, int, int);
void Swap(int*, int*);
void quickSelect(int a[], int l, int r,int k)
{
    if(l < r)
    {
        int p = Partition(a, l, r);
        if(p==k-1)
        {
            cout<<a[p]<<endl;
            return;
        }
        else if(p>k-1)
        {
            quickSelect(a, l, p - 1,k);
        }
        else{
            quickSelect(a, p + 1, r, k);
        }
    }
}
int Partition(int a[], int l, int r)
{
    int random = l + rand()%(r - l + 1);
    Swap(&a[random], &a[r]);
    int pivot = a[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            Swap(&a[i], &a[j]);
        }
    }
    Swap(&a[i + 1], &a[r]);
    return (i + 1);

}
void Swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int T,k;
    cout << "Enter no. of test cases:" << endl;
    cin >> T;
    while (T-- > 0)
    {
        int n,k;
        cout << "Enter size of array:";
        cin >> n;
        int a[n];
        cout << "Enter elements:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout<<"Enter value of k:";
        cin>>k;
        cout<<endl;
        quickSelect(a,0,n-1,k);
        cout << "Sorted Array:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout<<endl;
     }
}

