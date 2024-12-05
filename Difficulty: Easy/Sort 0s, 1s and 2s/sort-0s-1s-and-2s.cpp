//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& a) {
        // code here
         int zero=0,one=0,two=0;
         int n = a.size();
        
        for(int i=0;i<n;i++){
            if(a[i]==0){
                zero++;
                
            }
            else if(a[i]==1){
                one++;
                
            }
            else if(a[i]==2){
                two++;
                
            }
            
        }
        int i=0;
        while(zero--){
            a[i]=0;
            i++;
        }
        while(one--){
            a[i]=1;
            i++;
        }
        while(two--){
            a[i]=2;
            i++;
        }
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends