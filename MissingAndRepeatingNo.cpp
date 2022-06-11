#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int, int> result;
    
    vector<int> freqArr(n+1,0);
    
    for(int i = 0; i < n; i++)
    {
        freqArr[arr[i]]++;
        if(freqArr[arr[i]] > 1) result.second = arr[i];
        
    }
    
    for(int j =1; j < n+1; j++)
    {
        if(freqArr[j] == 0) result.first = j;
    }
    
    return result;
}
