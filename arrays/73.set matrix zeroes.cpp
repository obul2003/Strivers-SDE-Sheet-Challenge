class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int calZero=0;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    if(j==0)
                    {
                        calZero=1;
                    }
                    else
                    {
                        matrix[0][j]=0;
                    }
                    matrix[i][0]=0;
                }
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>0;j--)
            {
                if(matrix[i][0]==0 or matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        if(calZero==1)
        {
            for(int i=0;i<n;i++)
            {
                matrix[i][0]=0;
            }
        }
    }
}; 