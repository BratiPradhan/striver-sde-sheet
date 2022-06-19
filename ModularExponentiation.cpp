#include <bits/stdc++.h> 

// Time Complexity = log(n)
// Space Complexity = o(1)

int modularExponentiation(int x, int n, int m) {
    long ans = 1;
    long nn = n;
    long xx = x;
    
    while(nn > 0)
    {
        if(nn%2 != 0)
        {
            ans = (ans%m * xx%m)%m;
            nn = nn -1;
        }
        else
        {
            xx = (xx%m * xx%m)%m;
            nn = nn /2;
        }
    }
    
    ans = ans%m;
    
    return (int)ans;
}
