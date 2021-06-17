/* Single-Linked-List.cpp : This file contains the 'main' function. Program execution begins and ends there.
Singly-Linked List        no tail         with tail
-----------------------------------------------------
PushFront(Key)            O(1)
TopFront()                O(1)
PopFront()                O(1)
PushBack(Key)             O(n)            O(1)
TopBack()                 O(n)            O(1)
PopBack()                 O(n)
Find(Key)                 O(n)
Erase(Key)                O(n)
Empty()                   O(1)
AddBefore(Node, Key)      O(n)
AddAfter(Node, Key)       O(1)
*/

#include <iostream>
using namespace std;

#include "UILayer.h"
#include "Operations.h"

int main()
{
    int choice = 0;
    int val = 0;
    showMenu();
    sll *head=NULL, *tail=NULL;
    
    while (choice != 13)
    {
        printf("Enter your choice\n");
        cin >> choice;

        switch (choice) {

        case 1:
            printf("Enter the number to PushFront\n");
            cin >> val;
            PushFront(&head,val);
            break;

        case 3:
            printf("Enter the number to PopFront\n");
            head = PopFront(head, &val);
            if (val > 0)
                printf("The number Popped out is %d",val);
            break;

        case 4:
            printf("Enter the number to PushBack\n");
            cin >> val;
            head = PushBack(head, val);
            break;

        case 6:
            printf("Enter the number to PopBack\n");
            head = PopBack(head, &val);
            if (val > 0)
                printf("The number Popped out is %d", val);
            break;

        case 7:
            printf("Enter the number to find in the list\n");
            cin >> val;
            if (Find(head, val))
                printf("Number is present in the list\n");
            else
                printf("Number is not present in the list\n");
            break;

        case 8:
            printf("Enter the number to find in the list\n");
            cin >> val;
            if (Erase(head,val))
                printf("The Key is erased from the list");
            else
                printf("The Key does not exsist in the list");
            break;
        
        case 9:
            if (isEmpty(head))
                printf("List Empty\n");
            else
                printf("List not Empty\n");
            break;

        case 12:
            printf("Displaying the List\n");
            Display(head);
            break;

        default:
            printf("Wrong Choice Please Enter Valid Choice\n");
            break;
        }
    }

    return 0;
}
