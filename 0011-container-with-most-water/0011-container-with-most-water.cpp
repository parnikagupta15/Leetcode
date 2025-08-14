class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right= height.size()-1;
        int max_area=0;
        int curr_area;
        while(left<right){
            curr_area=(right-left)*min(height[left],height[right]);
            max_area=max_area<curr_area ? curr_area : max_area;
            height[left]>height[right] ? --right : ++left;
        }
        return max_area;
    }
};