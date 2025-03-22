#include <iostream>
#include <unordered_map>
#include <string>

int longestPalindrome(std::string s) {
    std::unordered_map<char, int> freq; // Hash map to store character frequencies

    // Count frequency of each character
    for (char c : s) {
        freq[c]++;
    }

    int length = 0;
    bool hasOdd = false; // To check if there's at least one character with an odd count

    // Calculate the maximum length of the palindrome
    for (auto pair : freq) {
        if (pair.second % 2 == 0) {
            length += pair.second; // Use all even counts fully
        } else {
            length += pair.second - 1; // Use the largest even part of the count
            hasOdd = true; // An odd character can be placed in the middle
        }
    }

    // If there's an odd-count character, we can place one in the center
    if (hasOdd) {
        length += 1;
    }

    return length;
}

int main() {
    std::string s = "abccccdd"; // Example input
    int result = longestPalindrome(s);
    std::cout << "Longest palindrome length: " << result << std::endl; // Output: 7
    return 0;
}
