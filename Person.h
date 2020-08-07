//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <string>
#include <ostream>
#include <sstream>
using namespace std;

/**
 * Abstract Class of Person
 */

class Person {
private:
    string firstName;
    string lastName;
    int documentId;



public:
    Person();
    Person(string &firstName, string &lastName, int documentId);
    virtual ~Person();
    const string &getFirstName() const;
    void setFirstName(const string &firstName);
    const string &getLastName() const;
    void setLastName(const string &lastName);
    int getDocumentId() const;
    void setDocumentId(int documentId);
    virtual const double salary() = 0;
    virtual const string toString() = 0;

};


#endif //LAB02_OOP_PERSON_H
