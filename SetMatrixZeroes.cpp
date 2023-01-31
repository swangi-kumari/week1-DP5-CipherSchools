#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {

        int r = arr.size();
        int c = arr[0].size();

        vector<int> xr,yc;


        for(int i=0;i<r;i++)
        {
            for(int j =0;j<c;j++)
            {
                if(arr[i][j] == 0)
                {
                    xr.push_back(i);
                    yc.push_back(j);
                }
            }
        }

        for(auto row : xr)
        {
            for(int col = 0;col<c;col++)
            arr[row][col] = 0;
        }

        for(auto col : yc)
        {
            for(int row = 0;row<r;row++)
            arr[row][col] = 0;
        }
    }
};
int main(){}
