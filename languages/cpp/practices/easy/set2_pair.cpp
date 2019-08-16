#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(
    const pair<string, pair<int, int> >& v1, 
    const pair<string, pair<int, int> >& v2
) 
{
    if (v1.second.first < v2.second.first) 
    { 
        return true;
    }
    if (v1.second.first == v2.second.first && v1.second.second < v2.second.second) 
    { 
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        vector<pair<string, pair<int, int > > > v;
        while (q--)
        {
            char instruction;
            cin >> instruction;
            if (instruction == 'a')
            {
                pair <string, pair <int, int> > p;
                cin >> p.first >> p.second.first >> p.second.second;
                v.push_back(p);
            }
            if (instruction == 'b')
            {
                cout << v.size();
            }
            if (instruction == 'c')
            {
                for (int i = 0; i < v.size(); i++)
                {
                    pair<string, pair<int, int> > pp = v[i];
                    cout << pp.first << " " << pp.second.first << " " << pp.second.second << " ";
                }
                cout << endl;
            }
            if (instruction == 'd')
            {
                sort(v.begin(), v.end(), compare);
            }
        }
    }

    return 0;
}