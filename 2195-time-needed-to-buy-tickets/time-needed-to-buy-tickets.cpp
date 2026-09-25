class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int timer=0;
        int n=tickets.size();
        while(tickets[k]){
            for(int i=0;i<n;i++){
                if(tickets[i] && tickets[k]){
                    tickets[i]--;
                    timer++;
                }
            }
        }
        return timer;
    }
};