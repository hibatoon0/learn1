#include <iostream>
#include <string>
bool isPalindrome(std::string& s) {
    int i = 0;
    int j = s.length() - 1;
    while (i < j){
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string word = "racecar";
    if (isPalindrome(word)){
        std::cout << word << " " << "is a palindrome";
    }
    else {
        std::cout << word << " " << "is not a palindrome";
    }
return 0;
}