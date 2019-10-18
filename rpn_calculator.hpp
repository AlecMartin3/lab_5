//
// Created by Alec on 2019-10-18.
//
#include <stack>
#include <sstream>
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "division_operation.hpp"
#include "multiplication_operation.hpp"
#ifndef LAB_5_RPN_CALCULATOR_HPP
#define LAB_5_RPN_CALCULATOR_HPP
class rpn_calculator{
private:
    int result;
    std::stack<int> stack;
    operation* operation_type(char operation){
      switch(operation){
          case addition_operation::ADDITION_CODE :
              return new addition_operation;
          case subtraction_operation::SUBTRACTION_CODE :
              return new subtraction_operation;
          case multiplication_operation::MULTIPLICATION_CODE:
              return new multiplication_operation;
          case division_operation::DIVISION_CODE :
              return new division_operation;
          default:
              std::cout << "invalid operation type" << std::endl;
      }
    }
    void perform(operation*  op){
        int n = stack.top();
        stack.pop();
        int i = stack.top();
        stack.pop();

        result = op->perform(i, n);
        stack.push(result);
    }

public:
    int process_form(std::string formula){
        std::istringstream iss(formula);
        std::string operand;
        while(iss >> operand){
            std::istringstream iss2(operand);
            int n;
            if(iss2 >> n){
                stack.push(n);
            }
            else{
                operation * ope = operation_type(operand[0]);
                perform(ope);
                delete(ope);
            }
        }
        return result;

    }
};
#endif //LAB_5_RPN_CALCULATOR_HPP
