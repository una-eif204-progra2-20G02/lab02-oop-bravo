//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include "Person.h"

class Professor: public Person {

private:

double monthlySalary;
double commissionRate;

public:
    Professor(const firstName &name, double monthlySalary, double commissionRate);

    void setMonthlySalary(double monthlySalary);

    void setCommissionRate(double commissionRate);

    double getMonthlySalary() const;

    double getCommissionRate() const;

    virtual ~Professor();
    virtual const double salary() ;


};

#endif //LAB02_OOP_PROFESSOR_H
