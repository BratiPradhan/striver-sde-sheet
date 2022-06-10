class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k =0;
        int j;
        int i;
        
        for(i = 0; i < m; i++){ 
            if(nums2[0] < nums1[i]){
                swap(nums1[i], nums2[0]);
            }
            
            int first = nums2[0];
            
            
            for(j = 1; j < n; j++){
                if(nums2[j] <= first){
                     nums2[j - 1] = nums2[j];
                } 
            }
            nums2[j-1] = first;
        }
        
        for(int l = m; l < n+m; l++){ 
            nums1[l] = nums2[k++];
        }
        
    }
};
