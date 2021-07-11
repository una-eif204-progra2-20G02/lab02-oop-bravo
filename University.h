//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include <ostream>
#include "Professor.h"
#include "Administrative.h"

class University {

private:
    string name;
    Professor professor;
    Administrative administrative;
    vector<Professor*> professorList;
    vector<Administrative*> administrativeList;

public:

    University(const string &name, const Professor &professor, const Administrative &administrative,
               const vector<Professor *> &professorList, const vector<Administrative *> &administrativeList);

    const string &getName() const;

    void setName(const string &name);

    const Professor &getProfessor() const;

    void setProfessor(const Professor &professor);

    const Administrative &getAdministrative() const;

    void setAdministrative(const Administrative &administrative);

    const vector<Professor *> &getProfessorList() const;

    void setProfessorList(const vector<Professor *> &professorList);

    const vector<Administrative *> &getAdministrativeList() const;

    void setAdministrativeList(const vector<Administrative*> &administrativeList);

    virtual ~University();

    friend ostream &operator<<(ostream &os, const University &university);

    bool operator==(const University &rhs) const;

    bool operator!=(const University &rhs) const;

    void addAdministrative( Administrative&);

    void addProfessor(Professor*);

};


#endif //LAB02_OOP_UNIVERSITY_H
