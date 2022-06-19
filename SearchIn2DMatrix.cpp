#include <bits/stdc++.h> 
#include <vector>

// better solution - when rows are sorted and last element of the row is lesser than first element of next row

// optimal solution - for row as well as column wise sorted

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    int i = 0, j = n-1;
    bool val = false;
    while(i < m && j >=0)
    {
        if(mat[i][j] == target) return true;
        else if(mat[i][j] > target) j--;
        else i++;
    }
    
    return val;
}
