#include<bits/stdc++.h>
using namespace std;

    void setZeroes(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= matrix[0].size();
        vector<vector<int>> ne=matrix;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<m;k++){
                        ne[k][j]=0;
                    }
                    for(int k=0;k<n;k++){
                        ne[i][k]=0;
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=ne[i][j];
            }
        }
    };
int main(){
    return 0;
}