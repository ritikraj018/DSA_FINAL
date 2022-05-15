// Merge Intervals
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    int n = intervals.size();
    int res = 0;

    for (int i = 0; i < n; ++i)
    {
        if (intervals[i][0] <= intervals[res][1])

        {
            intervals[res][0] = min(intervals[i][0], intervals[res][0]);
            intervals[res][1] = max(intervals[i][1], intervals[res][1]);
        }
        else
        {
            res++;
            intervals[res] = intervals[i];
        }
    }
    for (int i = 0; i < res; ++i)
    {
        ans.push_back(intervals[i]);
    }
    return ans;
}

void print2DVector(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of Vector: " << endl;
    cin >> n;
    vector<vector<int>> intervals;
    cout << "Enter all intervals:-" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter interval no " << i + 1 << ":-\n";
        vector<int> temp;
        for (int j = 0; j < 2; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        intervals.push_back(temp);
    }
    vector<vector<int>> ans = merge(intervals);
    print2DVector(ans);
}