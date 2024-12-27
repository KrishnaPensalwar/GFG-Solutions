//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // code here
        priority_queue<int> ans;
        
        for(int i=0;i<k;i++){
            ans.push(-arr[i]);
        }
        
        for(int i=k;i<arr.size();i++){
            if(-ans.top()<arr[i]){
                ans.pop();
                ans.push(-arr[i]);
            }
        }
        vector<int> result(k);
        for(int i=0;i<k;i++){
            result[k-1-i]=-ans.top();
            ans.pop();
        }
        
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.kLargest(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends