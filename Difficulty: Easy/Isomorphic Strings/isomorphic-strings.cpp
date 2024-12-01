//{ Driver Code Starts
// C++ program to check if two strings are isomorphic

#include <bits/stdc++.h>

using namespace std;
#define MAX_CHARS 256


// } Driver Code Ends
class Solution {
  public:
    // Function to check if two strings are isomorphic.
    bool areIsomorphic(string &s1, string &s2) {

    if (s1.size() != s2.size()) {
    return false; // Strings of different lengths cannot have a one-to-one mapping
}

unordered_map<char, char> map_s1_to_s2;
unordered_map<char, char> map_s2_to_s1;

for (int i = 0; i < s1.size(); i++) {
    char c1 = s1[i];
    char c2 = s2[i];

    // Check if mappings exist and if they are consistent
    if (map_s1_to_s2.count(c1) && map_s1_to_s2[c1] != c2) {
        return false;
    }
    if (map_s2_to_s1.count(c2) && map_s2_to_s1[c2] != c1) {
        return false;
    }

    // Create new mappings
    map_s1_to_s2[c1] = c2;
    map_s2_to_s1[c2] = c1;
}

return true; // Mapping is consistent


        
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    string s1, s2;
    while (t--) {
        cin >> s1;
        cin >> s2;
        Solution obj;
        int r = obj.areIsomorphic(s1, s2);
        if (r) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends