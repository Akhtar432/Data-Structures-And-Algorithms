#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.size() < 2)
            return chars.size();

        int i = 0; // used to overwrite the chars array
        int j = 0; // used to traverse the chars array 

        while (j < chars.size()) {
            chars[i] = chars[j];
            int count = 0;
            while (j < chars.size() && chars[j] == chars[i]) {
                count++;
                j++;
            }

            if (count == 1) {
               i++; 
            } else {
                string str = to_string(count);
                i++;
                for (char& digit : str) {
                    chars[i++] = digit;
                }
            }
        }
        return i;
    }
};