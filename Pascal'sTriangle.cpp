#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> m(n);
    
    for(int i=0; i < n; i++)
    {
        // resizing the row
        m[i].resize(i+1);
        
        // setting first and last ele of each row as 1
        m[i][0] = 1;
        m[i][i] = 1;
        
        for(int j = 1; j < i; j++)
        {
            m[i][j] = m[i-1][j-1] + m[i-1][j];
        }
    }
    
    return m;
}
