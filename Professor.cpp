//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"


Professor::Professor(const firstName &name, double monthlySalary, double commissionRate) : Person(name),
                                                                                           monthlySalary(monthlySalary),
                                                                                           commissionRate(
                                                                                                   commissionRate) {}

void Professor::setMonthlySalary(double monthlySalary) {
    Professor::monthlySalary = monthlySalary;
}

void Professor::setCommissionRate(double commissionRate) {
    Professor::commissionRate = commissionRate;
}

double Professor::getMonthlySalary() const {
    return monthlySalary;
}

double Professor::getCommissionRate() const {
    return commissionRate;
}

Professor::~Professor() {

}

const double Professor::salary() {
    return Person::salary();
}
