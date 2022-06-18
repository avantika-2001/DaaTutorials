#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define n 7
struct job {
    int index;
    int timetaken;
    int deadline;
};
bool compare(job a, job b)
{
    return a.deadline < b.deadline;
}
void job_scheduling(job j[])
{
    sort(j,j+n, compare);
    vector<int> t;
    int dead = 0, over = 0;
    for (int i = 0; i < n; i++)
    {
        dead = j[i].timetaken;
        if (over + dead <= j[i].deadline)
        {
            over += dead;
            t.push_back(j[i].index);
        }
    }
    cout << "Total number of tasks performed:" << t.size() << endl;
    cout << "Selected tasks:" << endl;
    for (auto it : t) {
        cout << it << " ";
    }
}
int main()
{
    struct job j[n];
    for (int i = 0; i < n; i++)
    {
        j[i].index = i + 1;
        cin >> j[i].timetaken;
        cin >> j[i].deadline;
    }
    job_scheduling(j);
}
