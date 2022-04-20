#include <iostream>
using namespace std;
void find_duplicates(int a[], int n)
{
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i+1])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        cout << "YES!"<<endl;
    else
        cout << "NO!"<<endl;
}
void Merge(int a[], int l, int mid, int r)
{
    int i = l, j = mid + 1, k = l;
    int b[100];
    while (i <= mid && j <= r)
    {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else if (a[i] > a[j])
            b[k++] = a[j++];
    }
    for (; i <= mid; i++)
        b[k++] = a[i];
    for (; j <= r; j++)
        b[k++] = a[j];
    for (int m = l; m <= r; m++)
    {
        a[m] = b[m];
    }
}
void merge_sort(int a[], int l,int r)
{
    while(l < r)
    {
        int mid = (l + r) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, r);
        Merge(a, l, mid, r);
    }
}

int main()
{
    int T;
    cout << "Enter no. of test cases:" << endl;
    cin >> T;
    while (T-- > 0)
    {
        int n;
        cout << "Enter size of array:";
        cin >> n;
        int a[n];
        cout << "Enter elements:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        merge_sort(a,0,n-1);
        find_duplicates(a, n);
    }
}
