class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int n=nums.size();
       bool flag = true;
       int x;
       for(int i=0; i<n; i++){
           if(nums[i]==target){
                x=i; 
                flag=false;
                break;
           }
        } 
        if(flag==true){
            nums.push_back(target);
            sort(nums.begin(),nums.end());
            for(int i=0; i<n; i++){
                if(nums[i]==target){
                    x=i;
                    break;
                }
            }
        }
       return x;
       
    }
};
