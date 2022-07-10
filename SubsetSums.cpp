
void getSubsetSum(vector<int> num, vector<int> &ans, int n, int sum, int index){
    if(index == n) {
        ans.push_back(sum);
        return;
    }
    
    getSubsetSum(num, ans, n, sum + num[index], index + 1);
    getSubsetSum(num, ans, n, sum, index+1);
    
}

vector<int> subsetSum(vector<int> &num)
{
    int n = num.size() ;
    vector<int> ans;
    int sum = 0, index = 0;
    
    getSubsetSum(num, ans, n, sum, index);
    
    sort(ans.begin(), ans.end());
    
    return ans;
}
