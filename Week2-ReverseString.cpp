
#include <iostream>
#include <vector>

void reverseString(std::vector<char>& s) {
    int left = 0, right = s.size() - 1;
    while (left < right) {
        std::swap(s[left], s[right]); // Swap characters
        left++;
        right--;
    }
}

int main() {
    std::vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);

    // Print reversed string
    for (char c : s) {
        std::cout << c << " ";
    }
    return 0;
}
