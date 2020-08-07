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
    Professor(string &firstName, string &lastName, int documentId, double monthlySalary, double commissionRate);
    double getMonthlySalary() const;
    void setMonthlySalary(double monthlySalary);
    double getCommissionRate() const;
    void setCommissionRate(double commissionRate);
    const double salary() override ;
    const string toString() override;
    virtual ~Professor();


};

#endif //LAB02_OOP_PROFESSOR_H
