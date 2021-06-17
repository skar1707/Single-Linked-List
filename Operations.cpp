#include "Operations.h"

sll* PushFront(sll** head, int val)
{
	if (!*head)
		*head = new sll(val);
	else
	{
		sll* temp = new sll(val);
		temp->next = *head;
		*head = temp;
	}
	return *head;
}

sll* PopFront(sll* head, int* Key)
{
	*Key = -1;
	if (!head)
		printf("List Empty\n");
	else
	{
		*Key = head->data;
		head = head->next;
	}
	return head;
}

sll* PushBack(sll* head, int Key)
{
	sll* newNode = new sll(Key);
	newNode->next = NULL;
	
	if (!head)
		head = newNode;
	else
	{
		sll* itr = head;

		while (itr->next)
		{
			itr = itr->next;
		}

		itr->next = newNode;
	}
	return head;
}

sll* PopBack(sll* head, int* Key)
{
	*Key = -1;
	if (!head)
		printf("List is empty");
	else
	{
		sll* itr = head;
		while (itr->next)
		{
			itr = itr->next;
		}
		*Key = itr->data;
	}
	return head;
}

bool Find(sll* head, int Key)
{
	bool found = false;
	if (!head)
		printf("List is Empty");
	else
	{
		sll* itr = head;
		while (itr)
		{
			if (itr->data == Key)
			{
				found = true;
				break;
			}
			itr = itr->next;
		}
	}
	return found;
}

bool Erase(sll* head, int Key)
{
	bool erased = false;
	if (!head)
		printf("List is empty");
	else if (head->data == Key)
	{
		head = head->next;
		erased = true;
	}
	else
	{
		sll* temp = head;
		while (temp->next)
		{
			if (temp->next->data == Key)
			{
				temp->next = temp->next->next;
				erased = true;
				break;
			}
			temp = temp->next;
		}
	}
	return erased;
}

bool isEmpty(sll* head)
{
	if (!head)
		return true;
	else
		return false;
}

sll* AddBefore(sll* Node, int Key)
{
	return Node;
}

sll* AddAfter(sll* Node, int Key)
{
	return Node;
}

void Display(sll* head)
{
	if (!head)
		printf("List Empty\n");

	sll* temp = head;

	while (temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
