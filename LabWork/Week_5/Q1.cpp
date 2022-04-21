#include<iostream>
using namespace std;
void count_dup(char ch[], int n)
{
    int b[26]={0},j=0;
    int max = 1,index=0;
    for (int i = 0; i < n; i++)
    {
        b[ch[i] - 'a']++;
    }
    for (j = 0; j < 26; j++)
    {
        if (max < b[j])
        {
            max = b[j];
            index=j;
        }
    }
    if(max==1)
        cout<<"No duplicates found!"<<endl;
    else
    {
        char c='a'+index;
        cout<<c<<"-" << max << endl;
    }
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
        char ch[n];
        cout << "Enter elements:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> ch[i];
        }
        count_dup(ch,n);

    }
}
