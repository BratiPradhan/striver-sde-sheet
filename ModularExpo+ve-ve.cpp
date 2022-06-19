#include <bits/stdc++.h>

// here exponent can be positive as well as negative
// for negative exponent - we can right it as 1 / n
// make the -ve, +ve and solve for +ve n 
// then make it 1 / ans

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
