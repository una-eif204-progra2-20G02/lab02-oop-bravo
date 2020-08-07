//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"


Administrative::Administrative(string &firstName, string &lastName, int documentId, double monthlySalary) : Person(
        firstName, lastName, documentId), monthlySalary(monthlySalary) {}

double Administrative::getMonthlySalary() const {
    return monthlySalary;
}

void Administrative::setMonthlySalary(double monthlySalary) {
    Administrative::monthlySalary = monthlySalary;
}



const double Administrative::salary() {
    return 0;
}
const string Administrative::toString() {
    stringstream admin;
    admin << "Administrative Information: " <<getFirstName() <<endl;
    admin << "Doc Id: " <<getDocumentId() << ", Monthly Salary: " <<getMonthlySalary() <<endl;
    return admin.str();
}

Administrative::~Administrative() {

}

