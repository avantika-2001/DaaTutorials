#include <iostream>
#include<math.h>
using namespace std;
void jump_search(int a[], int n, int x)
{
    int comp = 0,f=0;
    int m = sqrt(n);
    if (x == a[0])
        f = 1;
    if (x > a[0])
    {
        for (int i = 1; i < n; i++)
        {
            if (x > a[i * m]){
                comp++;
                continue;
            }
            else if (x == a[i * m])
                f = 1;
            else {
                for (int j = ((i - 1)*m)+1; j < i * m; j++)
                {
                    comp++;
                    if (x == a[j])
                    {
                        f=1;
                        break;
                    }
                }
            }
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
        jump_search(a,n, key);
    }
}
