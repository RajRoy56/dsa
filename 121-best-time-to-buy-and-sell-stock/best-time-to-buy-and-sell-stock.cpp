class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //find the next smallest 
        int mini=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            mini=min(prices[i],mini);
            int difference= prices[i]-mini;
            profit=max(profit,difference);
        }
        return profit;
    }
};