class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        
        int maxWater=0;
        while(l<r){
            int wd=r-l;
            int ln=min(height[l],height[r]);
            int area=wd*ln;
            maxWater=max(maxWater,area);
            if(height[l]<height[r]){
                l++;
            }
            else{r--;}        }
        return maxWater;
    }
};