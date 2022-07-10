#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {
    unordered_map<int, int> mpp;
    int currSum = 0;
    int maxCount = 0;
    
    for(int i = 0; i < arr.size(); i++)
    {
        currSum += arr[i];
        
        if(currSum == 0){
            maxCount = max(maxCount, i + 1);
        }
        else {
            if(mpp.find(currSum) != mpp.end()){
                maxCount = max(maxCount, i - mpp[currSum]);
            }
            else {
                mpp[currSum] = i;
            }
        }
    }
    return maxCount;
}
