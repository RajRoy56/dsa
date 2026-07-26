class Solution {
public:
   void revstr(vector<char>& s,int start,int end){
        if(start>=end){
            return ;
        }
        swap(s[start],s[end]);
        revstr(s,start+1,end-1);
    }
    void reverseString(vector<char>& s) {
    //recursive approach
    revstr( s,0,s.size()-1);

    
    }
};