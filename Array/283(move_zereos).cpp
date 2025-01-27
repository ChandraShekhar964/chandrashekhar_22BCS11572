class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // 1.approach
        // int i=0;
        // for(int j=0 ; j<nums.size(); j++){
        //     if(nums[j] != 0){
        //         swap(nums[j],nums[i++]);
        //         // we taken inside i++ to reduce the execution time
        //         // i++;
        //     }
        // }
        
        // 2.approach
        vector<int>v;
        // int t=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                v.push_back(nums[i]);
                // t++;
            }
        }
        int t=v.size();
        for(int i=0;i<t;i++){
            nums[i]=v[i];
        }
        for(int i=t;i<nums.size();i++){
            nums[i]=0;
        }
    }
};