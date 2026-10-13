class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int xiz = nums.size();
        // xiz=xiz-1;
        int num;

        for(int i = 0;i<xiz;i++){
           num = nums[i];
           for(int j=i+1;j<xiz;j++){
            if(num==nums[j]){
                return true;
            }
           }
    }
     return false;
}
};
