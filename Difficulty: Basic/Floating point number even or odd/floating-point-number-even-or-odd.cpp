//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
bool isEven(string s,int n);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if (isEven(s,n))
           cout << "EVEN\n";
        else
           cout << "ODD\n";
        
    }
    return 0;
}
// } Driver Code Ends


bool isEven(string s,int n)
{
    // code here.
    
   int a=0;
   for(int i=n-1;i>=0;i--){
       if(s[i]>='1'&&s[i]<='9'){
           a=(s[i]-'0');
           break;
       }
   }
  return a%2==0?1:0;
}