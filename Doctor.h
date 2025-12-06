// بسم الله الرحمن الرحيم
// "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"
// Free Palestine
#ifndef DOCTOR_H
#define DOCOTOR_H

#include <bits/stdc++.h>
#include "Person.h"
using namespace std;

#define nl '\n'

class Doctor : public Person
{
public:
    // Empty Constructor
    Doctor() : Person() {}

    // Parameterized Constructor
    Doctor(int id, string name, int age, CaseType caseType)
        : Person(id, name, age, caseType) {}

    // Override Display
    void display() const override
    {
        cout << "--- Doctor Details ---" << nl;
        Person::display();
        cout << "----------------------" << nl;
    }
};

#endif