class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int lu = 0;
        int c = 1;
        int i = 1;
        for(; c < nums.size(); c++)
        {
            if(nums[lu] < nums[c])
            {
                nums[i] = nums[c];
                i++;
                lu = c;
            }
        }
        return i;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna