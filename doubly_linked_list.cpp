/**
 * @file doubly_linked_list.cpp
 * @brief Implementation of a Doubly Linked List, with methods as declared in doubly_linked_list.h.
 *
 * Contains common operations like insertion, deletion, and movement of nodes.
 *
 * @date 09/05/2026 - initial creation and comments
 * @author Robin Lane
 */

#ifndef DOUBLY_LINKED_LIST_CPP
#define DOUBLY_LINKED_LIST_CPP

#include "milestone1.h"
#include "doubly_linked_list.h"
#include "dll_node.h"
 
DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {}
DoublyLinkedList::~DoublyLinkedList()
{
	//TODO: Make Destructor
}

//TODO: Comment
bool DoublyLinkedList::isEmpty() { return !head; }

//TODO: Comment
void DoublyLinkedList::insertAtHead(int key)
{
	DllNode* new_node = new DllNode(key);
	
	if(isEmpty())
	{
		head = new_node;
		tail = new_node;
		return;
	}

	new_node->next = head;
	head->prev = new_node;
	head = new_node;
}
//TODO: Comment
void DoublyLinkedList::insertAtTail(int key)
{
	DllNode* new_node = new DllNode(key);
	
	if(isEmpty())
	{
		head = new_node;
		tail = new_node;
		return;
	}
	
	new_node->prev = tail;
	tail->next = new_node;
	tail = new_node;
}
//TODO: Comment
void DoublyLinkedList::remove(int key)
{
	DllNode* current = head;
	while(current)
	{
		if(current->key == key)
		{
			if(current == head)
				removeHeaderNode();
			else if(current == tail)
				removeTailNode();
			else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
				delete current;
			}
			
			return;
		}
		current = current->next;
	}
}
//TODO: Comment
void DoublyLinkedList::removeHeaderNode()
{
	head = head->next;
	delete head->prev;
	head->prev = nullptr;
}
//TODO: Comment
void DoublyLinkedList::removeTailNode()
{
	tail = tail->prev;
	delete tail->next;
	tail->next = nullptr;
}
//TODO: Comment
void DoublyLinkedList::moveNodeToHead(int key)
{
	//TODO: Implement
}
//TODO: Comment
void DoublyLinkedList::moveNodeToTail(int key)
{
	//TODO: Implement
}
//TODO: Comment
void DoublyLinkedList::clear()
{
	//TODO: Implement
}
//TODO: Comment
void DoublyLinkedList::printList()
{
	logToFileAndConsole("\nHere are the List contents:");
	DllNode* current = head;
	while(current)
	{
		logToFileAndConsole("Node key: " + std::to_string(current->key));
		current = current->next;
	}
	logToFileAndConsole("End of List");
}
//TODO: Comment
void DoublyLinkedList::reversePrintList()
{
	logToFileAndConsole("\nHere are the List contents reversed:");
	DllNode* current = tail;
	while(current)
	{
		logToFileAndConsole("Node key: " + std::to_string(current->key));
		current = current->prev;
	}
	logToFileAndConsole("End of List");
}


#endif