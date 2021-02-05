#include <iostream>
#include <string>

void PrintFrame(std::string name) {
    const std::string sentence = "Sveikas, " + name + "!";
    const int sentenceLength = sentence.length();

    const std::string preffix("* ");
    const std::string suffix(" *");
    const std::string line1(preffix.length() + sentenceLength + suffix.length(), '*');
    const std::string line2(preffix + std::string(sentenceLength, ' ') + suffix);
    const std::string line3(preffix + sentence + suffix);
    const std::string line4(line2);
    const std::string line5(line1);

    std::cout << line1 << std::endl;
    std::cout << line2 << std::endl;
    std::cout << line3 << std::endl;
    std::cout << line4 << std::endl;
    std::cout << line5 << std::endl;
}

int main() {
    std::string name;
    std::cout << "Please enter your name: ";
    std::cin >> name;

    PrintFrame(name);

    return 0;
}