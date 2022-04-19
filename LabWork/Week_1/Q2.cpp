#include <iostream>
using namespace std;
void binary_search(int a[], int l, int r, int x)
{
    int comp = 0,f=0;
    int mid = 0;
    while (l <= r)
    {
        comp++;
        mid= (l + r) / 2;
        if (x > a[mid])
        {
            l=mid+1;
        }
        else if (x < a[mid])
        {
            r=mid-1;
        }
        else if(x == a[mid])
        {
            f = 1;
        }
    }
    if (f == 1)
        cout << "Present" << endl;
    else
        cout << "Not Present!" << endl;
    cout << "No. of Comparisons:" << comp<<endl;
}
int main()
{
    int T;
    cout << "Enter no. of test cases:" << endl;
    cin >> T;
    while (T-- > 0)
    {
        int n, key;
        cout << "Enter size of array:";
        cin >> n;
        int a[n];
        cout << "Enter elements:" << endl;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        cout << "Enter key to be searched:" << endl;
        cin >> key;
        binary_search(a, 0,n-1, key);
    }
}
