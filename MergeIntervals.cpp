#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<int> currPair = intervals[0];
    vector<vector<int>> result;
    
    if(intervals.size() == 0) return result;
    
    for(int i = 1; i < intervals.size(); i++)
    {
        if(currPair[1] >= intervals[i][0])
        {
            currPair[1] = max(currPair[1], intervals[i][1]);
        }
        else 
        {
            result.push_back(currPair);
            currPair = intervals[i];
        }
    }
    result.push_back(currPair);
    
    return result;
}
