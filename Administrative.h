//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include "Person.h"
using namespace std;
#include <iostream>
#include <sstream>

class Administrative: public Person {

private:
double monthlySalary;

public: 
Administrative();
Administrative(double);
Administrative(const string&, const string&, int, double);
double getMonthlySalary();
void setMonthlySalary(double);
double Salary(); // Salary(): salary ¿?
string toString();

};


#endif //LAB02_OOP_ADMINISTRATIVE_H
