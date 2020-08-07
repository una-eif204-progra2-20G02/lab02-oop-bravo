//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include <iostream>
#include <sstream>
#include "Person.h"
using namespace std;


class Administrative: public Person {

private:
double monthlySalary;

public:
    Administrative(string &firstName, string &lastName, int documentId, double monthlySalary);

    double getMonthlySalary() const;

    void setMonthlySalary(double monthlySalary);

    const double salary() override; // Salary(): salary ¿?
    const string toString() override;

    virtual ~Administrative();

};


#endif //LAB02_OOP_ADMINISTRATIVE_H
