#include<iostream>
using namespace std;
void comm_elements(int* a, int* b, int n, int m)
{
    int i = 0, j = 0;
    for (i = 0, j = 0; i < n, j < m;)
    {
        if (a[i] == b[j])
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}
int main()
{
    int T;
    cout << "Enter no. of test cases:" << endl;
    cin >> T;
    while (T-- > 0)
    {
        int n,m;
        cout << "Enter size of array1:";
        cin >> n;
        int a[n];
        cout << "Enter elements:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << endl;
        cout << "Enter size of array2:";
        cin >> m;
        int b[m];
        cout << "Enter elements:" << endl;
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        comm_elements(a, b, n, m);

    }
}

