#include <iostream>
#include <vector>
#include <queue>
#include "Merge_Files.h"
using namespace std;
void min_computation(int files[], int n)
{
    priority_queue<int, vector<int>, greater<int> >pq;    //for min heap
    for (int i = 0; i < n; i++)
    {
        pq.push(files[i]);
    }
    int min_sum = 0;
    while (pq.size() > 1)
    {
        int smallest_first = pq.top();
        pq.pop();
        int smallest_second = pq.top();
        pq.pop();
        int temp = smallest_first + smallest_second;
        min_sum += temp;
        pq.push(temp);
    }
    cout << "Minimum Computation Cost:" << min_sum << endl;
}
int main()
{
    int n;
    cin >> n;
    int files[n];
    for (int i = 0; i < n; i++)
    {
        cin >> files[i];
    }
    min_computation(files, n);
}
