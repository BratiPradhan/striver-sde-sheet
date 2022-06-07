#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    // initializing 
    long long currSum = 0, maxSum = INT_MIN;
    
    for(int i = 0; i < n; i++)
    {
        // updating currSum
        currSum += arr[i];
        
        // checking if currSum is negative or not
        // if -ve, set currSum = 0
        if(currSum < 0) currSum = 0;
        
        // checking maxSum
        maxSum = max(maxSum, currSum);   
    }
    
    return maxSum;
}
