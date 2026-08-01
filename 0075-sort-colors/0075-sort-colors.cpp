class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int count0 = 0; 
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                count0++;
            }
            else if(nums[i] == 1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        for(int j = 0; j < nums.size(); j++)
        {
            if(count0 > 0)
            {
                nums[j] = 0;
                count0 --;
            }
            else if(count1> 0)
            {
                nums[j] = 1;
                count1 --;
            }
            else
            {
                nums[j] = 2;
                count2--;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna