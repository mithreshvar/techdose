class Solution {
public: 
    void merge(vector<int> &arr,int low,int mid,int high){
        vector<int> temp;
        int left=low,right=mid+1;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left++]);
            }else{
                temp.push_back(arr[right++]);
            }
        }
        while(left<=mid){
            temp.push_back(arr[left++]);
        }
        while(right<=high){
            temp.push_back(arr[right++]);
        }
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
    }
    void mergeSort(vector<int> &nums,int l,int r){
        if(l>=r)return;
        int mid=l+(r-l)/2;
        mergeSort(nums,l,mid);
        mergeSort(nums,mid+1,r);
        merge(nums,l,mid,r);
    }
    vector<int> sortArray(vector<int>& nums) {
      int l=nums.size();
      mergeSort(nums,0,l-1);
      return nums;
    }
};
