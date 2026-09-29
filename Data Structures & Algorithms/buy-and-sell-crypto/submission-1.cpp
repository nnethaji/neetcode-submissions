class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int window_start = 0;
        int window_end = 0;
        int max_prof = 0;
        int curr_prof = 0;
        for(int i=0; i<prices.size(); i++){
            window_start = i;
            window_end =i+1;
            while(window_end < prices.size()){
                //if(prices[window_start] < prices[window_end]){
                    curr_prof = prices[window_end] - prices[window_start];
                    window_end++;
                //}
                // else{
                //     curr_prof = 0;
                //     window_end++;
                // }

                max_prof = (curr_prof>max_prof)?curr_prof:max_prof;
            }

        }
        return max_prof;
    }
};
