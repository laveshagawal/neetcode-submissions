class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int low=0;
        int high=n-1;
        int maxi=0;
        while(low<high){
            int width=high-low;
            int height=min(heights[low],heights[high]);
            int area=width*height;
            maxi=max(maxi,area);
            if(heights[low] < heights[high]){
                low++;
            }
            else{
                high--;
            }
        }
        return maxi;
    }
};
