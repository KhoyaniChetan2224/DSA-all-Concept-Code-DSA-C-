//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  void rec(int i, int k, vector<int>&arr)
  {
      if(arr.size() == 1)
      return;
      
      i = (i + k - 1)%arr.size();
      arr.erase(arr.begin() + i);
      
      rec(i, k, arr);
  }
    int safePos(int n, int k)
    {
        // code here
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        rec(0, k, arr);
        
        return arr[0];
    }
};
//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends