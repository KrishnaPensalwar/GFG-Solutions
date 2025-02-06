//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int zeros=0;
        int zeroindex=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                zeros++;
                zeroindex = i;
            }
        }
        vector<int> res(arr.size(),0);
        long long pro=1;
        if(zeros>1){
            return res;
        }else if(zeros==1){
            for(int i=0;i<arr.size();i++){
                if(arr[i]!=0){
                    pro *= arr[i];
                }
            }
            res[zeroindex]=pro;
            return res;
            
        }else{
            for(int i=0;i<arr.size();i++){
                if(arr[i]!=0){
                    pro *= arr[i];
                }
            }
            for(int i=0;i<res.size();i++){
                res[i]=pro/arr[i];
            }
        }
        
        return res;
        
        
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
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends