#include <iostream>
#include <cstdlib>
using namespace std;
int Partition(int*, int, int, int *,int *);
void Swap(int*, int*);
void random_sort(int a[], int l, int r,int *swaps,int *cmp)
{
    if(l < r)
    {
        int p = Partition(a, l, r,swaps,cmp);
        random_sort(a, l, p - 1,swaps,cmp);
        random_sort(a, p + 1, r,swaps,cmp);
    }
}
int Partition(int a[], int l, int r, int *swaps, int *cmp)
{
    int random = l + rand()%(r - l + 1);
    Swap(&a[random], &a[r]);
    int pivot = a[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        (*cmp)++;
        if (a[j] < pivot)
        {
            i++;
            Swap(&a[i], &a[j]);
            (*swaps)++;
        }
    }
    Swap(&a[i + 1], &a[r]);
    (*swaps)++;
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
    int T;
    cout << "Enter no. of test cases:" << endl;
    cin >> T;
    while (T-- > 0)
    {
        int n,swaps=0,cmp=0;
        cout << "Enter size of array:";
        cin >> n;
        int a[n];
        cout << "Enter elements:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        random_sort(a,0,n-1,&swaps,&cmp);
        cout << "Sorted Array:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " " << endl;
        }
        cout<<"Comparisons:"<<cmp<<endl;
        cout<<"Swaps:"<<swaps<<endl;
    }
}

