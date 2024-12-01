//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to check if a string is Pangram or not.
    bool checkPangram(string& s) {
        // your code here
        if(s.length()<26){
            return false;
        }
        
        transform(s.begin(),s.end(),s.begin(),::tolower);
        
        set<char> st;
        
        for(char c:s){
            if(isalpha(c)){
                st.insert(c);
            }
        }
        
        if(st.size()==26){
            return true;
        }
        
        return false;
    }
};

//{ Driver Code Starts.

// Driver Program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
    return (0);
}

// } Driver Code Ends