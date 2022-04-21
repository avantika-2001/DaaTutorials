#include<iostream>
using namespace std;
void find_pair(int a[], int n, int key)
{
    int f=0,i=0,j=0;
    for (i = 0; i < n-1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == key)
            {
                f = 1;
                cout << a[i] << " " << a[j]<<endl;
                break;
            }
        }
    }
    if(f==0)
        cout<<"No pair found!"<<endl;
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
void merge_sort(int a[], int l, int r)
{
    if (l < r)
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
        int n,key;
        cout << "Enter size of array:";
        cin >> n;
        int a[n];
        cout << "Enter elements:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        merge_sort(a, 0, n - 1);
        cout << "Enter key:" << endl;
        cin >> key;
        find_pair(a, n,key);
    }
}

