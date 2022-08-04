#include <bits/stdc++.h> 
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{
	
    int numRows = matrix.size();
    int numCols = matrix[0].size();
    vector<pair<int,int>> indexes;
    for(int i=0;i<numRows;i++) {
        for(int j=0;j<numCols;j++) {
            if(matrix[i][j] == 0) {
                pair<int,int> currPair;
                currPair.first = i;
                currPair.second = j;
                indexes.push_back(currPair);
            }
        }
    }
//     cout<<"These are the zero positions: "<<endl;
//         for(int i=0;i<indexes.size();i++) {
            
//             cout<<indexes[i].first<<" "<<indexes[i].second<<endl;
//         }
//         cout<<"-----"<<endl;
        
        for(int i=0;i<indexes.size();i++) {
            int row = indexes[i].first;
            int col = indexes[i].second;
            for(int j=0;j<numCols;j++) {
                matrix[row][j] = 0;
            }
            for(int j=0;j<numRows;j++) {
                matrix[j][col] = 0;
            }
        }
}