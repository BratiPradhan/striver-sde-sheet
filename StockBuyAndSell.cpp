#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int minStock = prices[0], maxProfit = INT_MIN;
    
    for(int i = 0; i < prices.size(); i++)
    {
        minStock = min(minStock, prices[i]);
        
        maxProfit = max(maxProfit, prices[i] - minStock);
    }
    
    return maxProfit;
}
