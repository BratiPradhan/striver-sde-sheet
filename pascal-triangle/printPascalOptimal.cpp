class Solution {
public:
    vector<int> generateRow(int n){
        int res = 1;
        vector<int> ans(n);
        ans.push_back(res);

        for(int i = 1; i <= n; i++){
            res = res * (n - i + 1);
            res = res / i;
            ans.push_back(res);
        }

        return ans;
    }

    vector<vector<int>> generate(int numRows) {
        
        
    }
};
