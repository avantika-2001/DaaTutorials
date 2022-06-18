#include <iostream>
#include <algorithm>
using namespace std;
int majority_element(int a[],int n)
{
    sort(a, a + n);
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[n / 2])
            c++;
    }
    if (c > n / 2)
        return 1;
    else
        return 0;
}
void find_median(int a[], int n)
{
    double med = 0;
    sort(a, a + n);
    if (n % 2 != 0)
    {
        med = a[n / 2];
    }
    else
    {
        med = (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
    }
    cout << "Median of array:" << med << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ml = majority_element(arr,n);
    if (ml == 1)
        cout << "Yes";
    else
        cout << "No";
    cout<<endl;
    find_median(arr, n);
}
