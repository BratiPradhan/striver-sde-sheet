#include <bits/stdc++.h>
using namespace std;

void printNthPascalRow(int n){
    int res = 1;
    
    cout << res << " ";
    
    for(int i = 1; i <= n; i++){
        res = res * (n - i + 1);
        res = res / i;
        cout << res << " ";
    }
}

int main() {
    int n =5;
    printNthPascalRow(n-1);

    return 0;
}
