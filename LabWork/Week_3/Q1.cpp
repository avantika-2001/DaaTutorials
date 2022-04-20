#include <iostream>
#include<math.h>
using namespace std;
void insertion_sort(int a[], int n)
{
    int shifts=0,comp=0;
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int min = a[i];
        while (j > -1 && a[j] > min && comp++)
        {
            a[j + 1] = a[j];
            shifts++;
            j--;
        }
        a[j + 1] = min;
    }
    cout << "Sorted Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout<<"Comparisons:"<<comp<<endl;
    cout<<"Shifts:"<<shifts<<endl;
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
        insertion_sort(a, n);
    }
}
