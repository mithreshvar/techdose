class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       int l=nums.size();
       for(int i=0;i<l;i++){
           int m=i;
           for(int j=i+1;j<l;j++){
               if(nums[j]<nums[m]){
                   m=j;
               }
           }
           swap(nums[i],nums[m]);
       }
       return nums;
    }
};
