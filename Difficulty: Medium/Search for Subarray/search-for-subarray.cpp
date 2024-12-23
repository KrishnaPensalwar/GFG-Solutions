//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> search(vector<int> &a, vector<int> &b) {
    vector<int> ans;
    int n = a.size(), m = b.size();

    if (m > n) return ans; // If b[] is larger, no matches are possible

    // Step 1: Compute prefix table for b[]
    vector<int> prefix(m, 0);
    int j = 0; // Length of the previous longest prefix suffix

    for (int i = 1; i < m; i++) {
        while (j > 0 && b[i] != b[j]) {
            j = prefix[j - 1];
        }
        if (b[i] == b[j]) {
            j++;
        }
        prefix[i] = j;
    }

    // Step 2: Search for b[] in a[] using the prefix table
    j = 0; // Index for b[]
    for (int i = 0; i < n; i++) {
        while (j > 0 && a[i] != b[j]) {
            j = prefix[j - 1];
        }
        if (a[i] == b[j]) {
            j++;
        }
        if (j == m) {
            ans.push_back(i - m + 1); // Record the starting index
            j = prefix[j - 1];       // Reset j to allow for overlapping matches
        }
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
        string line, line2;
        getline(cin, line);
        stringstream ss(line);
        vector<int> a, b;
        int num;
        while (ss >> num) {
            a.push_back(num);
        }
        getline(cin, line2);
        stringstream ss2(line2);
        while (ss2 >> num) {
            b.push_back(num);
        }
        Solution ob;
        vector<int> indices = ob.search(a, b);
        if (indices.empty()) {
            cout << "[]\n";
        } else {
            cout << "[";
            for (int i = 0; i < indices.size(); i++) {
                cout << indices[i];
                if (i < indices.size() - 1)
                    cout << ", ";
                else
                    cout << "]";
            }
            cout << endl;
        }
        cout << "~\n";
    }
}
// } Driver Code Ends