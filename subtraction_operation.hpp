//
// Created by Alec on 2019-10-18.
//
#include "abstract_operation.hpp"
#ifndef LAB_5_SUBTRACTION_OPERATION_HPP
#define LAB_5_SUBTRACTION_OPERATION_HPP
class subtraction_operation : public abstract_operation{
public:
    static const char SUBTRACTION_CODE = '-';
    subtraction_operation() : abstract_operation(SUBTRACTION_CODE){
    }
    int perform(int n, int i){
        int result = n - i;
        return result;
    }
    virtual ~subtraction_operation(){};
};
#endif //LAB_5_SUBTRACTION_OPERATION_HPP
