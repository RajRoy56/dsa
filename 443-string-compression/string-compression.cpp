class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0; // Tracks where we write in the array
        int i = 0;     // Tracks our position while reading
        
        while (i < n) {
            char current = chars[i];
            int count = 0;
            
            // Inner loop tp count all consecutive occurrences of the current character
            while (i < n && chars[i] == current) {
                count++;
                i++;
            }
            
            // 1 write the character
            chars[index] = current;
            index++;
            
            // 2. Only write the count if it's greater than 1
            if (count > 1) {
                string temp = to_string(count);
                for (char c : temp) {
                    chars[index] = c;
                    index++;
                }
            }
        }
        return index;
    }
};
