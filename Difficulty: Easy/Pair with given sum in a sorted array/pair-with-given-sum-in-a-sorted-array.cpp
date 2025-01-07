//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int count=0;
        map<int,int> mp;
        
        for(int i:arr){
            mp[i]++;
        }
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]--;
            if(mp.find(target-arr[i])!=mp.end()){
                if(mp[target-arr[i]]>0){
                    count += mp[target-arr[i]];
                    // mp[target-arr[i]]=0;
                }
            }
            // mp[arr[i]]++;
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends