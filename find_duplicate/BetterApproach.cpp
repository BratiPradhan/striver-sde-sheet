class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();

        vector<int> freq(n+1,0 );

        int ans = 0;

        

        for(int i =0; i < nums.size(); i++){

            if(freq[nums[i]+1] == 1){
                return nums[i];
            }
            freq[nums[i]+1] += 1;  
        }

        return ans;
        
        
    }
};
