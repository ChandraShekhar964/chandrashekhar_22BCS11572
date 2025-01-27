// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         bool a=false;
//         for(int i=0;i<nums.size()-1;i++){
//            for(int j=i+1;j<nums.size();j++){
//                if(nums[i]==nums[j]){
//                    return true;
//                }
//            }
//         }
//         return a;
//     }
// };
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
       }
       for(auto it:mp){
        if(it.second>1){
            return true;
        }
       }
        return false;
    }
};