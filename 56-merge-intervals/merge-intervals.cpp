class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        // If the next interval starts at or before the current one ends,
        // they overlap. Extend the current interval’s end if needed.
        //Otherwise, add the next interval as a new result interval.
        if (intervals.empty()) return {};

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        merged.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); ++i) {
            int start = intervals[i][0];
            int end = intervals[i][1];

            if (start <= merged.back()[1]) {
                merged.back()[1] = max(merged.back()[1], end);
            } else {
                merged.push_back(intervals[i]);
            }
        }

        return merged;
    }
};