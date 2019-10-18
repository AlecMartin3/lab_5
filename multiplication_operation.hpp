//
// Created by Alec on 2019-10-18.
//
#include "abstract_operation.hpp"
#ifndef LAB_5_MULTIPLICATION_OPERATION_HPP
#define LAB_5_MULTIPLICATION_OPERATION_HPP
class multiplication_operation : public abstract_operation{
public:
    static const char MULTIPLICATION_CODE = '*';
    multiplication_operation() : abstract_operation(MULTIPLICATION_CODE){
    }
    int perform(int n, int i){
        int result = n * i;
        return result;
    }
    virtual ~multiplication_operation(){};
};
#endif //LAB_5_MULTIPLICATION_OPERATION_HPP
