//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"

Person::Person() {

}

Person::Person( string &firstName, string &lastName, int documentId) : firstName(firstName), lastName(lastName), documentId(documentId) {}

Person::~Person() {

}


const string &Person::getFirstName() const {
    return firstName;
}

void Person::setFirstName(const string &firstName) {
    Person::firstName = firstName;
}

const string &Person::getLastName() const {
    return lastName;
}

void Person::setLastName(const string &lastName) {
    Person::lastName = lastName;
}

int Person::getDocumentId() const {
    return documentId;
}

void Person::setDocumentId(int documentId) {
    Person::documentId = documentId;
}


