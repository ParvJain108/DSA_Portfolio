class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        int count = 1;
        if(nums.size() == 0)
        {
            return 0;
        }
        unordered_set<int> st;
        for(int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]);
        }
        for(auto it : st)
        {
            if(st.find(it -1) == st.end())
            {
                int j = 1;
                int x = it;
                while(st.find(x+1) != st.end())
                {
                    x++;
                    j++;
                }
                count = max(count,j);
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna