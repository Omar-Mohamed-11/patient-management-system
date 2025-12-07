#ifndef LISTNODE_H
#define LISTNODE_H

#include "Doctor.h"
#include "PatientQueue.h"

class ListNode
{
public:
    Doctor doctor;          // Doctor object
    PatientQueue Patients;  // Queue of patients for this doctor
    ListNode* next;         // pointer to next node

    ListNode(const Doctor& d)
    {
        doctor = d;
        next = nullptr;
    }
};

#endif
