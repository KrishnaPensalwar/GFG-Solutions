//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        if(arr.size()<2)return {};
        
        sort(arr.begin(),arr.end());
        int i=0,n=arr.size(),j=n-1;
        int diff=INT_MAX;
        vector<int> ans;
        
        while(i<j){
            int sum = arr[i]+arr[j];
            if(abs(target-sum)<diff){
                diff = abs(target-sum);
                ans = {arr[i],arr[j]};
            }
            if(sum<target){
                i++;
            }else if(sum>target){
                j--;
            }else{
                return ans;
            }
        }
        
        return ans;
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
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends