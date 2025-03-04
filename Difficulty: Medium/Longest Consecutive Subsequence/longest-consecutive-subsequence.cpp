//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        set<int> st(arr.begin(),arr.end());
        int maxlength=1;
        int prev =-1;
        int ans =0;
        
        
        for(int i:st){
            // cout<<i<<endl;
            if(prev == -1){
                prev = i;
            }else{
                if(i-prev==1){
                    maxlength++;
                }else{
                    maxlength =1;
                }
                prev =i;
            }
            ans = max(ans,maxlength);
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
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends