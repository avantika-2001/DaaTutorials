#include <iostream>
#include<math.h>
using namespace std;
int c=0;
int count_dup(int a[], int l, int r, int x)
{
    int mid = (l + r) / 2;
    if (a[mid] == x && l<=r)
    {
        c++;
    }
    if (l < r)
    {
        count_dup(a, mid + 1, r, x);
        count_dup(a, l, mid - 1, x);
    }
    return c;
}
int main()
{
    int T;
    cout << "Enter no. of test cases:" << endl;
    cin >> T;
    while (T-- > 0)
    {
        c=0;
        int n, key;
        cout << "Enter size of array:";
        cin >> n;
        int a[n];
        cout << "Enter elements:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Enter key to be searched:" << endl;
        cin >> key;
        count_dup(a,0, n, key);
        cout<<key<<"-"<<c<<endl;
    }
}

