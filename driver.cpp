#include "calculator.h"

int main() {
    Calculator calc;

    ifstream inputFile("commands.txt");
    if (!inputFile.is_open()) {
        cout << "Failed to open the input file." << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        istringstream out(line);
        string command, operand1, operand2;
        out >> command >> operand1 >> operand2;

        if (command == "ADD") {
            calc.addition(operand1, operand2);
        }
    }

    inputFile.close();

    return 0;
}
