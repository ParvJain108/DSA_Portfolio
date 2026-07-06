class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        int n = nums.size();
        if (n == 0) return;
        k %= n;
        
        reverse(nums.end() - k  , nums.end());
        reverse(nums.begin(), nums.end() - k );
        reverse(nums.begin(), nums.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna