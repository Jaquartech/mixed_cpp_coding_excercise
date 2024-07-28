#ifndef OOPS_STRUCT_H
#define OOPS_STRUCT_H
#include <iostream>

class DataClass
{
    public:
    DataClass();
    void print();
    int add(int degree);

    private:
    int dat_count;
    struct dataStruct
    {
        int degree;
        float radian;
        float sin;
    };

};

#endif // !OOPS_STRUCT_H