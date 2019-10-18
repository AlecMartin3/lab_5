//
// Created by Alec on 2019-10-18.
//
#include "abstract_operation.hpp"
#ifndef LAB_5_DIVISION_OPERATION_HPP
#define LAB_5_DIVISION_OPERATION_HPP
class division_operation : public abstract_operation{
public:
    static const char DIVISION_CODE = '/';
    division_operation() : abstract_operation(DIVISION_CODE){
    }
    int perform(int n, int i){
        int result = n / i;
        return result;
    }
    virtual ~division_operation(){};
};
#endif //LAB_5_DIVISION_OPERATION_HPP
