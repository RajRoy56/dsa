class Solution {
public:
    // return bool for early exit condition
    bool canPlaceBalls(int mid, int n, const vector<int>& position, int m) {
        int count = 1;
        int last_pos = position[0]; // Track value directly instead of index
        
        for (int i = 1; i < n; i++) {
            if (position[i] - last_pos >= mid) {
                count++;
                last_pos = position[i];
                
                // Early exit: Stop processing immediately if we placed enough balls
                if (count >= m) return true; 
            }
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        // to Boost C++ I/O performance
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n = position.size();
        sort(position.begin(), position.end());
        
        int start = 1;
        int end = (position[n - 1] - position[0]) / (m - 1);
        int ans = 0;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (canPlaceBalls(mid, n, position, m)) {
                ans = mid;
                start = mid + 1; // Try for a larger minimum distance
            } else {
                end = mid - 1; // Try a smaller distance
            }
        }
        return ans;
    }
};