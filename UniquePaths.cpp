// RECURSION + DP

#include <bits/stdc++.h>

int countPaths(int i, int j, int m, int n, vector<vector<int>> &dp)
{
    if(i == m-1 && j == n-1) return 1;
    if(i >= m || j >= n ) return 0;
    
    if(dp[i][j] != -1) return dp[i][j];
    else return dp[i][j] = countPaths(i+1,j, m,n,dp) + countPaths(i, j+1,m,n,dp);

    
}

int uniquePaths(int m, int n) {
	vector<vector<int>> dp(m, vector<int> (n,-1));
    
    int i= 0, j = 0;
    
    int ans = countPaths(i, j, m, n, dp);
    return ans;
}




// MATH - COMBINATION
// TIme complexity - o(min(m, n))
// Space complexity = O(1)


#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	int N = m + n -2;
    int r = min(m,n);
    
    double res = 1;
    
    for(int i = 1; i < r; i++, N--)
    {
        res = res * N /i;
    }
    
    return (int)res;
}
