#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> result;
    
    int count1 = 0, ele1 = -1, count2 = 0, ele2 = -1;
    
    for(int i =0; i < arr.size(); i++)
    {
        if(ele1 == arr[i]) count1++;
        else if(ele2 == arr[i]) count2++;
        else if(count1 == 0) {
            ele1 = arr[i];
            count1 = 1;
        }
        else if(count2 == 0)
        {
            ele2 = arr[i];
            count2 = 1;
        }
        else 
        {
            count1--;
            count2--;
        }
    }
    
    count1 = count2 = 0;
    for(int i = 0; i < arr.size(); i++ )
    {
        if(ele1 == arr[i]) count1++;
        if(ele2 == arr[i]) count2++;
    }
    
    if(count1 > arr.size()/3) result.push_back(ele1);
    
    if(count2 > arr.size()/3) result.push_back(ele2);
    
    
    return result;

}
