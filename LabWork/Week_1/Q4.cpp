#include <iostream>
#include<math.h>
using namespace std;
void exp_search(int a[], int n, int x)
{
    int comp = 0, f = 0;
    int m = sqrt(n);
    if (x == a[0])
        f = 1;
    if (x > a[0])
    {
        for (int i = 1; i < n; i*=2)
        {
            if (x > a[i]) {
                comp++;
                continue;
            }
            else if (x == a[i])
                f = 1;
            else {
                int l = i / 2 + 1;
			    int r = i;
			    for (int j =l; j <= r; j++)
			    {
			    while(l<=r)
			    {
			        comp++;
                    int mid = (l + r) / 2;
				    if (x < a[mid])
					    r = mid - 1;
			        else if(x>a[mid])
					    l = mid + 1;
				    else if (x == a[mid])
					    f==1;
			    }
                }
            }
         }
    }
    if (f == 1)
        cout << "Present" << endl;
    else
        cout << "Not Present!" << endl;
    cout << "No. of Comparisons:" << comp << endl;
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Enter key to be searched:" << endl;
        cin >> key;
        exp_search(a, n, key);
    }
}
