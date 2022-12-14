/*
118. Pascal's Triangle
Easy

8059

266

Add to List

Share
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]
 

Constraints:

1 <= numRows <= 30
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        // cout<<v[0][0];
        v.push_back({1});
        for(int i=1;i<numRows;i++)
        {   v.push_back({1});
            for(int j=1;j<i;j++)
            {   if(j==0)
                v[i].push_back(v[i-1][j]+0);
                else if(j>0 && j<i)
                v[i].push_back(v[i-1][j]+v[i-1][j-1]);
            }
            v[i].push_back({1});
        }
    
    return v;}        
};