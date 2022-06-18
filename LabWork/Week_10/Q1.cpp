#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,s,e;
    cin >> n;
    vector <pair<int,int> > v;
    vector <int> c;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> e;
        v.push_back(make_pair(e, s));
    }
    sort(v.begin(), v.end());
    int count = 0, currEnd=-1;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second >= currEnd)
        {
            count++;
            c.push_back(i);
            currEnd = v[i].first;
        }
    }
    cout << "Maximum no. of activities:" << count << endl;
    cout << "List of selected Activities:" << endl;
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
}
