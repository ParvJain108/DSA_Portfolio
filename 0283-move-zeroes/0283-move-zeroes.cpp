class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int zeroes = 0;
        for(int x = 0; x < nums.size();x++)
        {
            if(nums[x] == 0)
            {

                zeroes++;
            }
            else
            {
                nums[x - zeroes] = nums[x];

            }
        }
        for(;zeroes >0; zeroes--)
        {
            nums[nums.size() - zeroes] = 0;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna