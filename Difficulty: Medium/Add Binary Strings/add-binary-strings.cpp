//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        
        int size1 = s1.size(), size2 = s2.size();
    int carry = 0;
    string ans = "";


    if (size1 < size2) s1 = string(size2 - size1, '0') + s1;
    else s2 = string(size1 - size2, '0') + s2;

   
    for (int i = s1.size() - 1; i >= 0; --i) {
        int bit1 = s1[i] - '0';
        int bit2 = s2[i] - '0';
        int sum = bit1 + bit2 + carry;

        ans += (sum % 2) + '0'; 
        carry = sum / 2;      
    }

    
    if (carry) ans += '1';

    reverse(ans.begin(), ans.end()); 
    int i=0;
    
    while(ans[i]=='0'){
        i++;
    }
    
    string res="";
    
    for(int k=i;k<ans.size();k++){
        res += ans[k];
    }
    return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends