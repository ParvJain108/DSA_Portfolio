class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        map<int,int> mpp;
        for(int i  = 0; i < nums.size(); i ++)
        {
            if(mpp.find(nums[i]) != mpp.end())
            {
                if(mpp[nums[i]] >= (nums.size()/2))
                {
                    return nums[i];
                }
                mpp[nums[i]] ++;
            }
            else
            {
                mpp[nums[i]] = 1;
            }
        }
        return nums[0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna