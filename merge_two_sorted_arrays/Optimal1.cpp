class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int left = m -1;
        int right = 0;

        for(int i = 0; i < n ; i++){
            nums1[m+i] = nums2[i];
        }

        while(left >= 0 && right < n){
            if(nums1[left]  > nums1[right]){
                swap(nums1[left] ,nums1[right]);
            } else {
                break;
            }
        }

        sort(nums1.begin(), nums1.end());
        
    }
};
