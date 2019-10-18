//
// Created by Alec on 2019-10-18.
//
#include "abstract_operation.hpp"
#ifndef LAB_5_ADDITION_OPERATION_HPP
#define LAB_5_ADDITION_OPERATION_HPP
class addition_operation : public abstract_operation{
public:
    static const char ADDITION_CODE = '+';
    addition_operation() : abstract_operation(ADDITION_CODE){
    }
    int perform(int n, int i){
        int result = n + i;
        return result;
    }
    virtual ~addition_operation(){};
};

#endif //LAB_5_ADDITION_OPERATION_HPP
