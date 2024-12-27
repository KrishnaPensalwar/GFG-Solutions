//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int> pq;
        
        for(int i=0;i<arr.size();i++){
            pq.push(-arr[i]);
        }
        
        int ans =0;
        
        while(!pq.empty()){
            
            int num1 = -pq.top();
            pq.pop();
            if(pq.empty()){
                return ans;
            }
            int num2 = -pq.top();
            pq.pop();
            
            ans += num1 + num2;
            pq.push(-num1-num2);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends