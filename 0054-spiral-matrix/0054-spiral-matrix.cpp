class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        vector<int> ans;

        int n = matrix[0].size(); // current width
        int m = matrix.size();    // current height
        int start = 0;

        while (n > 0 && m > 0)
        {
            int i = start;
            int j = start;

            // left -> right
            for (; i < start + n; i++)
                ans.push_back(matrix[j][i]);

            i--;

            // top -> bottom
            for (j = start + 1; j < start + m; j++)
                ans.push_back(matrix[j][i]);

            j--;

            // right -> left
            // Only if there is more than one row
            if (m > 1)
            {
                for (i = start + n - 2; i >= start; i--)
                    ans.push_back(matrix[j][i]);
            }

            // bottom -> top
            // Only if there is more than one column
            if (n > 1)
            {
                for (j = start + m - 2; j > start; j--)
                    ans.push_back(matrix[j][start]);
            }

            // Move to the next inner submatrix
            start++;
            n -= 2;
            m -= 2;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna