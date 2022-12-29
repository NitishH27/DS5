#include<iostream>
using namespace std;

struct Qnode{
    int data;
    Qnode* next;
    Qnode (int d){
        data = d;
        next = NULL;



    }
};

struct Queue{
    Qnode *front, *rear;
    
    

}

