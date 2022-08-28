#include <bits/stdc++.h> 
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> answer;
    for(int i=1;i<=n;i++) {
        vector<long long int> currRow;
        currRow.clear();
        int count = 0;
        for(int j=1;j<=i;j++) {
            if(j==1 || j==i) {
                currRow.push_back(1);
            }
            else {
//                 answer[i-1][j-1] = answer[i-2][count] + answer[i-2][count+1];
                currRow.push_back(answer[i-2][count] + answer[i-2][count+1]);
                count++;
            }
        }
        answer.push_back(currRow);
    }
    return answer;
}
