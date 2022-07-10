// TIme Complexity = O(nlogn)
// Space Complexity = O(n);

#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    map<int, int> mpp;
    int cnt = 0;
    int xorr = 0;
    
    for(auto i : arr)
    {
        xorr = xorr ^ i;
        if(xorr == x){
            cnt += 1;
        }
        
        if(mpp.find(xorr ^ x) != mpp.end()){
            cnt += mpp[xorr ^ x];
        }
        mpp[xorr] +=1;
    }
    
    return cnt;
}
