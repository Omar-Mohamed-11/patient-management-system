// #ifndef DOCTORQUEUE_H
// #define DOCTORQUEUE_H

// #include <bits/stdc++.h>
// #include "Patient.h"
// #include "Doctor.h"
// using namespace std;

// class Node
// {
// private:
//     Doctor doctor;
//     Node *next;

// public:
//     QueueNode() {}
//     QueueNode(Doctor &d) : doctor(d), next(NULL) {}
// };

// class DoctorList
// {
// private:
//     Node *head;
//     Node *tail;
//     // add doctor count method to know the size
//     int size;

//     public:

// }



#include "ListNode.h"

#ifndef DOCTORLIST_H
#define DOCTORLIST_H


class DoctorList
{
private:
    ListNode* head;
    ListNode* tail;
    int DoctorsCount; //number of doctors

public:
    DoctorList();


};

#endif
