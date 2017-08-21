//
// Created by ohrf02 on 8/21/2017.
//

#ifndef CALCULATOR_ADDITION_H
#define CALCULATOR_ADDITION_H

#include <iostream>
#include <string>

#include "calculatorOperation.h"

class Addition : public calculatorOperation {
public:
    Addition(){};

    virtual bool supportsOperations(string op_string) const {
        return op_string == "add" || op_string == "+";
    }

    virtual int requiredParameters() const {
        return 1;
    }

    virtual double calcResult(double currVal, vector<string> parameters) const {
        return currVal + std::atoi((*parameters.begin()).c_str());
    }

};


#endif //CALCULATOR_ADDITION_H
