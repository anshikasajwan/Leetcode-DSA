class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int closestSum = nums[0] + nums[1] + nums[2]; 
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int r=nums.size()-1;
            while(j<r){
                sum=nums[i]+nums[j]+nums[r];
                if (abs(sum - target) < abs(closestSum - target)) {
                    closestSum = sum;
                }
                if(sum<target){ j++;}

                else if(sum>target){ r--;}
                else {
                    return target; 
                }


            }
            
        }
          return closestSum;
    }
};