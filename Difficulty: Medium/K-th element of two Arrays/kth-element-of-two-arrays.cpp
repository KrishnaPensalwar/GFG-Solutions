//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
     
    //  int i=0,j=0;
    //  vector<int> newarr;
     
    //  while(i<a.size() && j<b.size()){
    //      if(a[i]>b[j]){
    //          newarr.push_back(b[j]);
    //          j++;
    //      }else{
    //          newarr.push_back(a[i]);
    //          i++;
    //      }
    //  }
     
    //  return newarr[k-1];
    
    a.insert(a.end(),b.begin(),b.end());
    
    sort(a.begin(),a.end());
    
    return a[k-1];
        
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends