#include <iostream>
#include <vector>
#include <sstream>
#include "Addition.h"
#include "Subtraction.h"

using namespace std;
int main() {
    /*
    std::string input, temp;
    std::cin >> input;

    std::vector<string> inputVector;
    stringstream stream (input);

    while((stream >> temp) != nullptr){
        inputVector.push_back(temp);
    }

    */

    Addition add;
    Subtraction sub;

    vector<string> vec;
    vec.push_back("45");
    cout << sub.calcResult(55, vec) << endl;

    return 0;
}