// بسم الله الرحمن الرحيم
// "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"
// Free Palestine
#ifndef DOCTOR_H
#define DOCTOR_H

#include <bits/stdc++.h>
#include "Person.h"
using namespace std;

#define nl '\n'

class Doctor : public Person
{
    // don't touch this part i will  complete it (Omar Adel)
    int yearsOfexperinece;
    double sallary;  
public:
    // Empty Constructor
    Doctor() : Person() {}

    // Parameterized Constructor
    Doctor(int id, string name, int age, CaseType caseType)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->caseType = caseType;
    }

    // Override Display
    void display() const override
    {
        cout << "--- Doctor Details ---" << nl;
        Person::display();
        cout << "----------------------" << nl;
    }
};

#endif