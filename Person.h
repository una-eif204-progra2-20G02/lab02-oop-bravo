//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <string>
#include <ostream>
using namespace std;

/**
 * Abstract Class of Person
 */
 
class Person {
private:
string firstName;
string lastName;
int documentId;
// afasfafsada
public:
Person();
Person(firstName: const string&, lastName: const string&, documentId: int);
virtual ~Person();
string getFirstName();
void setFirstName(firstName: const string&);
string getLastName();
void setLastName(lastName: const string&);
int getDocumentId();
void setDocumentId(documentId: int):getDocumentId;
virtual const double salary();
virtual const toString();

private:
    string firstName;
    string lastName;
    int documentId;

public:
    Person();
    Person(const string &firstName, const string &lastName, int documentId);
    virtual ~Person();
    string getFirstName();
    void setFirstName(firstName: const string&);
    string getLastName();
    void setLastName(lastName: const string&);
    int getDocumentId();
    void setDocumentId(documentId: int):getDocumentId;
    virtual const double salary();
    virtual const toString();


};




#endif //LAB02_OOP_PERSON_H
