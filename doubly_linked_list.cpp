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

#include "doubly_linked_list.h"
#include "dll_node.cpp"
 
DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {}
DoublyLinkedList::~DoublyLinkedList()
{
	//TODO: Make Destructor
}

bool DoublyLinkedList::isEmpty()
{
	//TODO: Implement
	return true;
}
//TODO: Comment
void DoublyLinkedList::insertAtHead(int key)
{
	//TODO: Implement
}
//TODO: Comment
void DoublyLinkedList::insertAtTail(int key)
{
	//TODO: Implement
}
//TODO: Comment
void DoublyLinkedList::remove(int key)
{
	//TODO: Implement
}
//TODO: Comment
void DoublyLinkedList::removeHeaderNode()
{
	//TODO: Implement
}
//TODO: Comment
void DoublyLinkedList::removeTailNode()
{
	//TODO: Implement
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
	//TODO: Implement
}
//TODO: Comment
void DoublyLinkedList::reversePrintList()
{
	//TODO: Implement
}


#endif