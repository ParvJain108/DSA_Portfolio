class Solution {
public:
    bool check(vector<int>& nums)
    {
        int count = 0;

        if(nums.size() == 1)
        {
            return true;
        }

        // Count the number of drops
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] > nums[i + 1])
            {
                count++;
            }
        }

        // Check last and first element
        if(nums[nums.size() - 1] > nums[0])
        {
            count++;
        }

        return count <= 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna