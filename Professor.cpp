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

    double salarioFinal=0;
    double opcion=0;
    opcion= 0.5/(100*monthlySalary);
    salarioFinal= monthlySalary-opcion;
    return salarioFinal;
// aqui se supone que el salario mensual deba ser modificado por este resultado o que este
// solo sea un dato extra que se obtenga a utilizar el salario mensual.?
}

Professor::~Professor() {

}

const string Professor::toString() {
    stringstream prof;
    prof << "Professor Information: " <<getFirstName() <<endl;
    prof << "Doc Id: " <<getDocumentId() << ", Monthly Salary: " <<getMonthlySalary() <<endl;
    // esta siguiente linea es para expresar el salario mensual con el rebajo
    prof << "Doc Id: " <<getDocumentId() << ", Monthly Salary after reductions: " <<salary() <<endl;
    return prof.str();
}
