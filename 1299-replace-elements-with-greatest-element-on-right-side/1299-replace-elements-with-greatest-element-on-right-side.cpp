class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        int temp;
        int max = arr[arr.size() - 1];
        for(int i = arr.size() - 2; i >= 0; i-- )
        {
            temp = arr[i];
            arr[i] = max;
            if(max < temp)
            {
                max = temp;
            }
        }
        arr[arr.size() -1] = -1;
        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna