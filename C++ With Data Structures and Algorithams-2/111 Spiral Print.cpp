#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row*col;

        //index initialisation
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;

        while (count < total){
            for (int index = startingCol; index<endingCol; index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            for (int index = startingRow; index<endingRow; index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            //print ending column
            for (int index = endingCol; index>=startingCol; index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            //print starting column
            for (int index = endingRow; index>=startingRow; index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};
int main (){

    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << " Enter the elements " << endl;
    // Taking input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
  
    cout << " Printing the array " << endl;
    // print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << "  ";
        }
        cout << endl;
    }

    return 0;
}