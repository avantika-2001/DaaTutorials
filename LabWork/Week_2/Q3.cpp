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
        int n, dif=0, c=0;
        cout << "Enter size of array:";
        cin >> n;
        int a[n];
        cout << "Enter elements:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout<<"Enter key element:"<<endl;
        cin>>dif;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 1; j < n ; j++)
            {
                if (abs(a[i] - a[j]) == dif)
                {
                    c++;
                }
            }
         }
        cout<<"Total pairs : "<<c<<endl;
     }
}
