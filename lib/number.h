#pragma once

#include <iostream>

using namespace std;

class Calculator {

private:
    double first_num_ = 0;
    double second_num_ = 0;

public:
    void SetFirst(double a);
    void SetSecond(double a);
    double GetResult();
    void Add();
    void Subs();
    void Mult();
    void Div();
    void Launch(double first, double second, char operation);
};

