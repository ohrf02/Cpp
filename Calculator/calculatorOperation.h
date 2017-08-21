//
// Created by ohrf02 on 8/21/2017.
//

#ifndef CALCULATOR_CALCULATOROPERATION_H
#define CALCULATOR_CALCULATOROPERATION_H

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

 class calculatorOperation {
public:
     virtual bool supportsOperations(string op_string)const = 0;
     virtual int requiredParameters() const = 0;
     virtual double calcResult(double currVal, vector<string> parameters) const = 0;
};


#endif //CALCULATOR_CALCULATOROPERATION_H
