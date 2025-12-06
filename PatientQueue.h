#ifndef PATIENTQUEUE_H
#define PATIENTQUEUE_H

#include <bits/stdc++.h>
#include "Patient.h"
using namespace std;

// QueueNode class
class QueueNode
{
public:
    Patient patient;
    QueueNode *next;
    // Constructors
    QueueNode() {}
    QueueNode(Patient patient)
    {
        this->patient = patient;
        next = NULL;
    }
};

// PatientQueue class
class PatientQueue
{
private:
    QueueNode *head;
    QueueNode *tail;
    int size;

public:
    // Default constructor
    PatientQueue()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    // Cheack if the queue is empty or not
    bool isEmpty()
    {
        return (head == NULL && tail == NULL);
    }

    // Enqueue to add patient
    void enqueue(Patient patient)
    {
        QueueNode *newPatient = new QueueNode(patient);
        if (isEmpty())
        {
            head = tail = newPatient;
        }
        else
        {
            tail->next = newPatient;
            tail = newPatient;
        }
        size++;
    }

    // Dequeue to delete patient
    Patient dequeue(){
        if(isEmpty()){
            cout<<"There is no patient!\n";
            exit(1);
        }
        else if(head==tail){
            Patient tempVal = head->patient;
            delete head;
            head = tail = NULL;
            return tempVal;
        }
        else{
            Patient tempVal = head->patient;
            QueueNode *temp = head;
            head = head->next;
            delete temp;
            return tempVal;
        }
    }

    
};

#endif