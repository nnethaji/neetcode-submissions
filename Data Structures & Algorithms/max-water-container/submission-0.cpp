class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0; 
        int right = heights.size() - 1; 
        int best_max = 0;
        int curr_area = 0;
        while(left<right){
            curr_area = min(heights[left], heights[right]) * (right - left);
            best_max = (curr_area > best_max) ? curr_area : best_max;
            if(heights[left] < heights[right]){
                left++;
            }
            else{
                right--;
            }



        }

    return best_max;

    }
};
