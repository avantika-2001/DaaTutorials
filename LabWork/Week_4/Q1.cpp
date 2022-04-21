#include <iostream>
using namespace std;
int inversions(int a[],int n)
{
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
                c++;
        }
    }
    return c;
}
void Merge(int a[], int l, int mid, int r, int &cmp)
{
    int i = l, j = mid + 1, k = l;
    int b[100];
    while (i <= mid && j <= r)
    {
        cmp++;
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
void merge_sort(int a[], int l,int r,int &cmp)
{
    if(l < r)
    {
        int mid = (l + r) / 2;
        merge_sort(a, l, mid,cmp);
        merge_sort(a, mid + 1, r,cmp);
        Merge(a, l, mid, r,cmp);
    }
}

int main()
{
    int T,c=0;
    cout << "Enter no. of test cases:" << endl;
    cin >> T;
    while (T-- > 0)
    {
        int n,cmp=0;
        c=0;
        cout << "Enter size of array:";
        cin >> n;
        int a[n];
        cout << "Enter elements:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        c=inversions(a,n);
        merge_sort(a,0,n-1,cmp);
        cout<<"Sorted Array:"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" "<<endl;
        }
        cout<<"Inversions:"<<c<<endl;
        cout<<"Comparisons:"<<cmp<<endl;
    }
}

