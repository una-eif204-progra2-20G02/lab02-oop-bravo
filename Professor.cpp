//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"


Professor::Professor(string &firstName, string &lastName, int documentId, double monthlySalary, double commissionRate)
        : Person(firstName, lastName, documentId), monthlySalary(monthlySalary), commissionRate(commissionRate) {}


double Professor::getMonthlySalary() const {
    return monthlySalary;
}

void Professor::setMonthlySalary(double monthlySalary) {
    Professor::monthlySalary = monthlySalary;
}

double Professor::getCommissionRate() const {
    return commissionRate;
}

void Professor::setCommissionRate(double commissionRate) {
    Professor::commissionRate = commissionRate;
}

const double Professor::salary() {
    return 0;
}

Professor::~Professor() {

}

const string Professor::toString() {
    stringstream prof;
    prof << "Professor Information: " <<getFirstName() <<endl;
    prof << "Doc Id: " <<getDocumentId() << ", Monthly Salary: " <<getMonthlySalary() <<endl;
    return prof.str();
}
