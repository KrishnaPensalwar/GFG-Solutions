//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    // bool foundelement(int x , vector<int> &mat){
    //     int low = 0;
    //     int high = mat.size()-1;
    //     int mid = (low + high )/2;
        
    //     if(mat[mid]==x){
    //         return true;
    //     }else if(mat[mid]>x){
    //         high = mid-1;
    //     }else{
    //         low = mid +1;
    //     }
    // }
    bool searchRowMatrix(vector<vector<int>> &v, int x) {
        // code here
        

        for(int i=0;i<v.size();i++){
            if(binary_search(v[i].begin(), v[i].end(), x)){
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;
        Solution obj;
        if (obj.searchRowMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends