class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        if(n<3) return 0;
        int l=0, r=n-1;
        long long ans=0;
        int left_max, right_max=0;
        while(l<=r){
            if(left_max<=right_max){
                left_max= max(left_max, height[l]);
                ans+=max(0, left_max-height[l]);
                ++l;
            }
            else{
                right_max= max(right_max, height[r]);
                ans+=max(0, right_max-height[r]);
                --r;
            }
        }
        return ans;
    }
};