class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int k = matrix.size();
        int m = matrix[0].size();

        int col0 = 1;

        // Mark rows and columns
        for(int i = 0; i < k; i++)
        {
            if(matrix[i][0] == 0)
                col0 = 0;

            for(int j = 1; j < m; j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Process rows and columns
        for(int i = 1; i < k; i++)
        {
            for(int j = 1; j < m; j++)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }

        // First row
        if(matrix[0][0] == 0)
        {
            for(int j = 0; j < m; j++)
                matrix[0][j] = 0;
        }

        // First column
        if(col0 == 0)
        {
            for(int i = 0; i < k; i++)
                matrix[i][0] = 0;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna