//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int fibSum(long long int N){
        //code here
        
        
        long long int n1=0;
        long long int n2=1;
        long long int ans=0;
        long long int sum=0;
        long long int mod = 1000000007;
        long long int a = 0, b = 1;
    
   
        for (int i = 1; i <= N; i++) {
            // cout << a << " ";  
            
            
            long long int next = a%mod + b%mod;
            a = b;
            b = next;
            sum += a;
        }
        return sum%mod;
        
        
        /*
        n1 = 0 , n2 = 1 , ans = 1;
        n1 = 1 , n2 = 1 , ans = 1;  i=0
        n1 = 1 , n2 = 2 , ans = 2;  i=1
        n1 = 2 , n2 = 3 , ans = 3;  i=2
        
        
        */
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.fibSum(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends