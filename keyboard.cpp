#include <iostream>
#include <map>
#include <cctype>

int main() {
    std::map<char, std::string> keyMappings = {
        {'2', "ABC"},
        {'3', "DEF"},
        {'4', "GHI"},
        {'5', "JKL"},
        {'6', "MNO"},
        {'7', "PQRS"},
        {'8', "TUV"},
        {'9', "WXYZ"},
        {'0', " "}
    };

    std::cout << "Enter a sequence of uppercase letters: ";
    std::string input;
    std::cin >> input;

    std::string phoneNumber;
    for (char ch : input) {
        char key = std::toupper(ch);
        auto it = keyMappings.find(key);
        if (it != keyMappings.end()) {
            phoneNumber += it->first;
        } else {
            phoneNumber += ch;  // If the character is not a letter, keep it unchanged
        }
    }

    std::cout << "Corresponding telephone digits: " << phoneNumber << std::endl;

    return 0;
}
