#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	int count = 0;
    int element = 0;
    for(int i = 0; i < n; i++)
    {
        if(count == 0) element = arr[i];
        if(arr[i] == element) count += 1;
        else count -= 1;
    }
    
    count = 0;
    for(int i = 0; i<n; i++)
    {
        if(arr[i] == element) count++;
    }
    
    if(count <= n/2) return -1;
    
    return element;
}
