#include <bits/stdc++.h> 
#include <vector>

// when rows are sorted and also the last ele of row is smaller than the first ele of next row
// we can apply imaginary binary search

bool findTargetInMatrix(vector < vector < int >> & matrix, int m, int n, int target) {
    if(!matrix.size()) return false;
    int low = 0, high = (m*n) - 1;
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        if(matrix[mid/n][mid%n] == target) return true;
        else if(matrix[mid/n][mid%n] > target) high = mid -1;
        else low = mid + 1;
    }
    
    return false;
}
