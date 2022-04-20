#include <iostream>
#include<math.h>
using namespace std;

void selection_sort(int a[], int n)
{
    int comp = 0, swaps = 0;
    int i =0,j = 0,k = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = k = i; j < n; j++)
        {
            comp++;
            if (a[j] < a[k])
                k=j;
        }
        swaps++;
        int temp = a[i];
        a[i] = a[k];
        a[k] = temp;
    }
    cout << "Sorted Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "Comparisons:" << comp << endl;
    cout << "Swaps:" << swaps << endl;
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
        selection_sort(a, n);
    }
}
