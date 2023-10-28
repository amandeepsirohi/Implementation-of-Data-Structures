// https://codeberg.org/anhsirk0/col-sum
// Very basic program to calculate sum of numbers piped in from STDIN

#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void printHelp(string programName) {
    cout << "Pipe numbers in '" << programName << "' to calculate sum." << endl;
    cout << "Example:\n\tseq 10 | " << programName << "     #=> 55" << endl;
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        printHelp(argv[0]);
        return 0;
    }

    string lineInput;
    double total = 0.0;
    while (getline(cin, lineInput)) {
        total += ::atof(lineInput.c_str());
    }
    cout << total << endl;
    return 0;
}