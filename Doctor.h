// بسم الله الرحمن الرحيم
// "وَأَنْ لَيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ"
// Free Palestine
#ifndef DOCTOR_H
#define DOCTOR_H

#include <bits/stdc++.h>
#include "Person.h"
#include "SafeInput.h"
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
    Doctor(int id, string name, int age, CaseType caseType, int ex)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->caseType = caseType;
        this->yearsOfexperinece = ex;
        this->sallary = sallary_generator(ex);
    }

    void setYearsOfExperience(int ex)
    {
        this->yearsOfexperinece = ex;
        // we should update sllary because it based on years of experience
        this->sallary = sallary_generator(ex);
    }

    int getYearsOfExperience()
    {
        return this->yearsOfexperinece;
    }

    double getSal()
    {
        return (double)this->sallary;
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