//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(read.readLine());
            Solution ob = new Solution();

            System.out.println(ob.armstrongNumber(n));
        }
    }
}
// } Driver Code Ends


// User function Template for Java
class Solution {
    static String armstrongNumber(int n) {
        // code here
        int sum =0;
        int temp=n;
        
        while(temp>0){
            int temp2 = temp%10;
            int cube =  temp2 * temp2 * temp2;;
            sum = sum + cube;
            temp /= 10;
        }
        
        if(sum == n)return "true";
        
        return "false";
    }
}