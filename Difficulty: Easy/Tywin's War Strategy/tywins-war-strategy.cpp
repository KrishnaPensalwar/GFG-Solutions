class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        // code here
        vector<int> rem;
    int n = arr.size();
    int divisibleCount = 0; 
    
    for (int val : arr) {
        if (val % k == 0) {
            divisibleCount++;
        } else {
            rem.push_back(val % k);
        }
    }
    
    int halfNeeded = (n + 1) / 2; 
    if (divisibleCount >= halfNeeded) {
        return 0;
    }
    
    sort(rem.begin(), rem.end()); 
    int j = rem.size() - 1;
    int cost = 0;
    
    while (divisibleCount < halfNeeded && j >= 0) {
        cost += (k - rem[j]);
        divisibleCount++;
        j--;
    }
    
    return cost;
    }
};