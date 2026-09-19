class Solution {
public:

    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        int index;
        stack<int>st;
        for(int i=0;i<n;i++){
            //find the next smallest element
            while(!st.empty() && heights[i]<heights[st.top()]){
                index=st.top();
                st.pop();
                //calculate the leng of rectangle for this i
                if(!st.empty()){
                    ans=max(ans,heights[index]*(i-st.top()-1));
                }
                else
                    ans=max(ans,heights[index]*i);
            }
            st.push(i);
        }
        while(!st.empty()){

                index=st.top();
                st.pop();
                //calculate the leng of rectangle for this i
                if(!st.empty()){
                    ans=max(ans,heights[index]*(n-st.top()-1));
                }
                else
                    ans=max(ans,heights[index]*n);

        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>heights(col,0);
        int ans=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]=='0'){
                    heights[j]=0;
                }
                else{
                    heights[j]++;
                }
            }
            ans=max(ans, largestRectangleArea(heights));
        }
        return ans;
    }
};