//
// Created by Alec on 2019-10-18.
//

#ifndef LAB_5_OPERATION_HPP
#define LAB_5_OPERATION_HPP
class operation{
public:
    virtual char get_code() = 0;
    virtual int perform(int n, int i) = 0;
    virtual ~operation(){};
};
#endif //LAB_5_OPERATION_HPP
