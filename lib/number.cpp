#include "number.h"

void Calculator::Add() {
    first_num_ += second_num_;
}

void Calculator::Subs() {
    first_num_ -= second_num_;
}

void Calculator::Mult() {
    first_num_ *= second_num_;
}

void Calculator::Div() {
    first_num_ /= second_num_;
}

void Calculator::SetFirst(double a) {
    first_num_ = a;
}

void Calculator::SetSecond(double a) {
    second_num_ = a;
}

double Calculator::GetResult() {
    return first_num_;
}

void Calculator::Launch(double first, double second, char operation) {

    while (operation != '!') {
        if (operation ==  '+') {
            Add();
            cout << GetResult();
            cin >> operation >> second;
            SetSecond(second);
        } else if (operation == '-') {
            Subs();
            cout << GetResult();
            cin >> operation >> second;
            SetSecond(second);
        } else if (operation == '*') {
            Mult();
            cout << GetResult();
            cin >> operation >> second;
            SetSecond(second);
        } else if (operation == '/') {
            Div();
            cout << GetResult();
            cin >> operation >> second;
            SetSecond(second);
        }
    }
}
