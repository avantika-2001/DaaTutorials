#include <iostream>
using namespace std;
void linear_search(int a[], int n, int x)
{
    int comp = 0,f=0;
    for (int i = 0; i < n; i++)
    {
        comp++;
        if (a[i] == x)
        {
            f = 1;
            break;
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
        linear_search(a, n, key);
    }
}

