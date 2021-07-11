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
    double salarioFinal=0;
    double opcion=0;
    opcion= 0.5/(100*monthlySalary);
    salarioFinal= monthlySalary-opcion;
    return salarioFinal;

}
const string Administrative::toString() {
    stringstream admin;
    admin << "Administrative Information: " <<getFirstName() <<endl;
    admin << "Doc Id: " <<getDocumentId() << ", Monthly Salary: " <<getMonthlySalary() <<endl;
    // esta siguiente linea es para expresar el salario mensual con el rebajo
    admin << "Doc Id: " <<getDocumentId() << ", Monthly Salary after reductions: " <<salary() <<endl;
    return admin.str();
}

Administrative::~Administrative() {

}

