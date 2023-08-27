#include <map>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(std::string s) {
            std::map<char, int> romanToIntMap;

            romanToIntMap['I'] = 1;
            romanToIntMap['V'] = 5;
            romanToIntMap['X'] = 10;
            romanToIntMap['L'] = 50;
            romanToIntMap['C'] = 100;
            romanToIntMap['D'] = 500;
            romanToIntMap['M'] = 1000;

            int value = 0;
            int i = 0;
            while (i < s.length()) {
                if(s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X') ){
                    value+=romanToIntMap[s[i+1]]-romanToIntMap[s[i]];
                    cout << romanToIntMap[s[i+1]]-romanToIntMap[s[i]] << endl;
                    i+=2;
                } else if(s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C') ){
                    value+=romanToIntMap[s[i+1]]-romanToIntMap[s[i]];
                    cout << romanToIntMap[s[i+1]]-romanToIntMap[s[i]] << endl;
                    i+=2;
                } else if(s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M') ){
                    value+=romanToIntMap[s[i+1]]-romanToIntMap[s[i]];
                    cout << romanToIntMap[s[i+1]]-romanToIntMap[s[i]] << endl;
                    i+=2;
                } else {
                    value+=romanToIntMap[s[i]];
                    i++;
                }
            };
            return value;
    }
};

int main() {
    Solution solution;

    // Example input Roman numeral
    std::string romanNumeral = "MCMXCIV";

    // Call the romanToInt function
    int intValue = solution.romanToInt(romanNumeral);

    // Print the result
    std::cout << "Integer value of Roman numeral " << romanNumeral << " is: " << intValue << std::endl;

    return 0;
}
