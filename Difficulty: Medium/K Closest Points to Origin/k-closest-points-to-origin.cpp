//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Your code here
        
        vector<vector<int>> ans;
        vector<pair<int, vector<int>>> mp; 
    
        
        for (vector<int> point : points) {
            int distance = point[0] * point[0] + point[1] * point[1]; // Squared Euclidean distance
            mp.push_back({distance, point});
        }
    
        
        sort(mp.begin(), mp.end());
    
        
        for (int i = 0; i < k; i++) {
            ans.push_back(mp[i].second);
        }
    
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int n;
        cin >> n;
        vector<vector<int>> points(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> points[i][0] >> points[i][1];
        }
        Solution ob;
        vector<vector<int>> ans = ob.kClosest(points, k);
        sort(ans.begin(), ans.end());
        for (const vector<int>& point : ans) {
            cout << point[0] << " " << point[1] << endl;
        }
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends