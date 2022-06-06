#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
    int i;

    for(i = n - 2; i >=0; i--)
    {
        // 1 - find the digit which is smaller than its next digit
        if(p[i] < p[i+1]) break;
    }
    
    // if next greatest permutation doesn't exist
    if(i<0) 
    {
        reverse(p.begin(), p.end());
    }
    else
    {
        for(int j = n-1; j >i; j--)
        {
            // 2 - if curr digit is greater than p[i]
            // swap it
           if(p[j] > p[i]) 
           {
               swap(p[j], p[i]);
               break;
           }
        }
        // 3 - reverse the arr from i+1 till end
        reverse(p.begin() + i +1, p.end());
    }
    
    return p;
}
