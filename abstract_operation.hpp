//
// Created by Alec on 2019-10-18.
//

#include "operation.hpp"
#ifndef LAB_5_ABSTRACT_OPERATION_HPP
#define LAB_5_ABSTRACT_OPERATION_HPP

class abstract_operation : public operation{
private:
    char operation_type;
public:
    abstract_operation(char op){
        operation_type = op;
    }
    char get_code() override {
        return operation_type;
    }
    virtual ~abstract_operation(){};
};

#endif //LAB_5_ABSTRACT_OPERATION_HPP
