class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        int count=0;
        int start=intervals[0][0];
        int end= intervals[0][1];
        for( int i=1 ; i < n ; i++){
            int st=intervals[i][0];
            int ed=intervals[i][1];
            if( st < end){//overlap 
                count++;
               end=min(ed,end);
               start=max(start,st);
            }
            else{
                end=intervals[i][1];
                start=intervals[i][0];
            }
        }
        return count;
    }
};