class Solution {
public:
    int winner(vector<int>& person, int person_left, int n, int k, int index) {
        // base case if there is only one person left
        if (person_left == 1) {
            for (int i = 0; i < n; i++) {
                if (person[i] == 0) {
                    return i;
                }
            }
        }
        // to eliminate the kth person
        int kill = (k - 1) % person_left;
        while (kill--) {
            index = (index + 1) % n;
            while (person[index] == 1) {
                index = (index + 1) % n;
            }
        }
        person[index] = 1;
        // find the point to start the game;
        while (person[index] == 1) {
            index = (index + 1) % n;
        }
        // do this process again and again to find the winnere
        return winner(person, person_left - 1, n, k, index);
    }
    int findTheWinner(int n, int k) {
        vector<int> person(n, 0);
        return winner(person, n, n, k, 0)+1;
    }
};