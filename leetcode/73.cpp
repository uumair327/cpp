class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> rows(m, 1); // To mark rows
        vector<int> cols(n, 1); // To mark columns

        // First pass: mark the rows and columns that should be set to zero
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    rows[i] = 0;
                    cols[j] = 0;
                }
            }
        }

        // Second pass: set matrix cells to zero based on marked rows and columns
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (rows[i] == 0 || cols[j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
