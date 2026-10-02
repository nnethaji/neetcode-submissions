class Solution {
public:

    string largestNumber(vector<int>& nums) {
        
        vector<std::string> numtostring;
        for(auto i : nums){
            numtostring.push_back(to_string(i));
        }

        std::sort(numtostring.begin(), numtostring.end(), 
            [&](std::string a, std::string b){
                return (a+b > b+a);
            }
        );
        std::string ans = "";
        for(std::string i : numtostring){
            
            ans = ans+i;
        }
        if(numtostring[0] == "0"){
            return "0";
        }
        return ans;
    }
};