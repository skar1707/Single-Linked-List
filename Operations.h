#pragma once
#include <cstdio>

struct sll
{
    int data;
    sll* next;
    
    sll(int val)
    {
        data = val;
        next = NULL;
    }
};

sll* PushFront(sll** head,int Key);
//sll* TopFront(); // Returns the top structure
sll* PopFront(sll* head,int* Key);
sll* PushBack(sll* head, int Key);
//sll* TopBack();  // Returns the last structure
sll* PopBack(sll* head, int* Key);
bool Find(sll* head,int Key);
bool Erase(sll* head,int Key);
bool isEmpty(sll* head);
sll* AddBefore(sll* Node, int Key);
sll* AddAfter(sll* Node, int Key);
void Display(sll* head);

