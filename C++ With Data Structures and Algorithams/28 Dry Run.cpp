#include<iostream>
using namespace std;

class Solution{
    private:
        bool isSofe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m){

            if((x >= 0 && x < n) && (y >= 0 && y < n) && (visited[x][y] == 0 && m[x][y] == 1){
                return true;
            }
            else{
                return false;
            }
        }
        void solve(vector<vector<int>> &m, int n, vector<string>& ans, int x,int y, vector<vector<int>> visited, string path){

            //base case
            if(x == n-1 && y == n-1){
                ans.push_back(path);
                return;
            }
            visited[x][y] = 1;

            //4 choice - D, L, R, U

            //dome
            int newx = x+1;
            int newy = y;
            if(isSofe(newx, newy, n, visited, m)){
                path.push_back('D');
                solve(m, n, ans, newx, newy, visited, path);
            }

            //left
            newx = x;
            newy = y-1;
            if(isSofe(newx, newy, n, visited, m)){
                path.push_back('L');
                solve(m, n, ans, newx, newy, visited, path);
            }

            //Right
            newx = x;
            newy = y+1;
            if(isSofe(newx, newy, n, visited, m)){
                path.push_back('R');
                solve(m, n, ans, newx, newy, visited, path);
            }

            //Up
            newx = x-1;
            newy = y;
            if(isSofe(newx, newy, n, visited, m)){
                path.push_back('U');
                solve(m, n, ans, newx, newy, visited, path);
            }



            visited[x][y] = 0;
        }
    public:
        vector<string> findPath(vector<vector<int>> &m, int n){
            vector<string> ans;

            if(m[0][0] == 0)
            {
                return ans;
            }

            int srcx = 0;
            int srcy = 0;

            vector<vector<int>> visited = m;

            //initialition with 0
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    visited [i][j] = 0;
                }
            }
            string path = "";
            solve(m, n, ans, srcx, srcy, visited, part);
            sort(ans.begin(), ans.end());
            return ans;
        }
};

int main (){

    int arr[4] = {{1, 0, 0, 0}, {1, 1, 0, 0}, {1, 1, 0, 0}, {0, 1, 1, 1 }};



    return 0;
}