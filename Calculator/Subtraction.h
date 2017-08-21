//
// Created by ohrf02 on 8/21/2017.
//

#ifndef CALCULATOR_SUBTRACTION_H
#define CALCULATOR_SUBTRACTION_H


#include "calculatorOperation.h"

class Subtraction : public calculatorOperation {
public:
    virtual bool supportsOperations(string op_string) const {
        return (op_string == "sub" || op_string == "-");
    }

    virtual int requiredParameters() const {
        return 1;
    }

    virtual double calcResult(double currVal, vector<string> parameters) const {
        return currVal - std::atoi((*parameters.begin()).c_str());
    }
};


#endif //CALCULATOR_SUBTRACTION_H
