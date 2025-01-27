class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>v;
    for(int i=0;i<nums.size();i++){
        v.push_back(nums[i]);
    }
    sort(v.begin(),v.end());
    int i=0;
    int j=v.size()-1;
    int x=0;
    int y=0;
    while(i<j){
        int sum=v[i]+v[j];
        if(sum==target){
         x=v[i];
         y=v[j];
         break;
        }
        else if(sum<target){
            i++;
        }
        else{
            j--;
        }
    }
    vector<int>res;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==x || nums[i]==y){
            res.push_back(i);
        }
    }
    return res;
}
};