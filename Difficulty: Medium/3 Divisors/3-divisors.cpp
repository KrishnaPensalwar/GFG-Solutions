//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
vector<long long> generateallprimes(long long N) {
        vector<bool> isPrime(N + 1, true);
        isPrime[0] = isPrime[1] = false;  // 0 and 1 are not primes
        for (long long i = 2; i * i <= N; i++) {
            if (isPrime[i]) {
                for (long long j = i * i; j <= N; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        vector<long long> allprimes;
        for (long long i = 2; i <= N; i++) {
            if (isPrime[i]) {
                allprimes.push_back(i);
            }
        }
        return allprimes;
    }
    
    vector<int> threeDivisors(vector<long long> query, int q) {
        // Find the maximum number in the queries to limit the sieve
        long long maxQuery = *max_element(query.begin(), query.end());
        
        // Generate all primes up to sqrt(maxQuery)
        vector<long long> primes = generateallprimes(sqrt(maxQuery));
        
        vector<int> ans;
        
        for (int i = 0; i < q; i++) {
            long long num = query[i];
            int count = 0;
            
            // Count primes whose squares are <= num
            for (long long prime : primes) {
                if (prime * prime <= num) {
                    count++;
                } else {
                    break; // No need to check further since primes are sorted
                }
            }
            
            ans.push_back(count);
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends