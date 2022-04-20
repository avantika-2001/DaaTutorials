#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int T;
    cout << "Enter no. of test cases:" << endl;
    cin >> T;
    while (T-- > 0)
    {
        int n, key, flag=0;
        cout << "Enter size of array:";
        cin >> n;
        int a[n];
        cout << "Enter elements of sorted array:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 2; i++)
        {
            if (flag == 1)
                break;
            for (int j = 1; j < n - 1; j++)
            {
                for (int k = 2; k < n; k++)
                {
                    if (a[i] + a[j] == a[k])
                    {
                        cout << i << "  " << j << " " << k << endl;
                        flag = 1;
                    }
                }
            }
        }

    }
}
