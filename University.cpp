//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"

University::University(const string &name, const Professor &professor, const Administrative &administrative,
                       const vector<Professor *> &professorList, const vector<Administrative *> &administrativeList)
        : name(name), professor(professor), administrative(administrative), professorList(professorList),
          administrativeList(administrativeList) {}

const string &University::getName() const {
    return name;
}

void University::setName(const string &name) {
    University::name = name;
}

const Professor &University::getProfessor() const {
    return professor;
}

void University::setProfessor(const Professor &professor) {
    University::professor = professor;
}

const Administrative &University::getAdministrative() const {
    return administrative;
}

void University::setAdministrative(const Administrative &administrative) {
    University::administrative = administrative;
}

const vector<Professor *> &University::getProfessorList() const {
    return professorList;
}

void University::setProfessorList(const vector<Professor *> &professorList) {
    University::professorList = professorList;
}

const vector<Administrative *> &University::getAdministrativeList() const {
    return administrativeList;
}

void University::setAdministrativeList(const vector<Administrative *> &administrativeList) {
    University::administrativeList = administrativeList;
}

University::~University() {

}

void University::addAdministrative(Administrative& admin) {
    vector<Administrative*>::iterator it = administrativeList.end();
    administrativeList.insert(it, &admin);
}

void University::addProfessor(Professor *prof) {
    vector<Professor*>::iterator it = professorList.end();
    professorList.insert(it, prof);
}







