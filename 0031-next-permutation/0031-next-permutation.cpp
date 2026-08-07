class Solution {
public:
    void nextPermutation(vector<int>& nums)
    {
        int index = -1;
        int less = -1;

        // 1. Find rightmost increasing pair
        for(int i = nums.size() - 2; i >= 0; i--)
        {
            if(nums[i] < nums[i + 1])
            {
                index = i;
                break;
            }
        }

        // No next permutation
        if(index == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        // 2. Find smallest element greater than nums[index]
        for(int j = nums.size() - 1; j > index; j--)
        {
            if(nums[j] > nums[index])
            {
                less = j;
                break;
            }
        }

        // 3. Swap
        swap(nums[less], nums[index]);

        // 4. Reverse suffix
        reverse(nums.begin() + index + 1, nums.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna