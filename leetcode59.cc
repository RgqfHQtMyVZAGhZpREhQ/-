class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n,0));
        int startrow {0}, startcol {0};
        int i {0};
        int j {0};
        int loop = (n / 2);
        int offset {1};
        int count = 1;
        while (loop--)
        {
            for (j = startcol; j < n - offset; j++)
            {
                matrix[startrow][j] = count;
                count++;
            }
            for (i = startrow; i < n - offset; i++){
                matrix[i][j] = count;
                count++;
            }
            for (j = n - offset; startcol < j; j--)
            {
                matrix[n - offset][j] = count;
                count++;
            }
            for (i = n - offset; startrow < i; i--)
            {
                matrix[i][startcol] = count;
                count++;
            }
            startcol++;
            startrow++;
            offset++;
        }
        if (n % 2 == 1)
        {
            int mid = (n / 2);
            matrix[mid][mid] = count;
        }
        return matrix;
        
    }
};
