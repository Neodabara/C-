#include "LLClass.h"
#include <iostream>

using namespace std;

Node::Node(int value)
{
	data = value;
}

LLClass::LLClass()
{
	head = NULL;
}

int LLClass::sizeOfList()
{
	return listItems;
}

void LLClass::push_front(int value)
{
	Node* newNode = new Node(value);
	
	newNode ->next = head;
	
	head = newNode;
	
	listItems++;
}

void LLClass::push_back(int value)
{
	Node* newNode = new Node(value);
	
	newNode ->next = NULL;
	
	listItems++;         
}

void LLClass::destroy(int value)
{
	delete Node(value);
}

void LLClass::destroyAll()
{
	current = head;
	      
	while (current != NULL) 
	{
		Node* tempNext = current->next;
		delete current;
		current = tempNext;
    }
    
    head = NULL;
}

void LLClass::insert(int position, int value)
{
	Node* newNode = new Node(value);
	Node* previous = NULL;
	
	current = head;
	
	while (current != NULL && newNode->value > current->value)
	{
		previous = current;
		current = current->next;
	}
	
	newNode->next = current;
	
	if (previous == NULL)
		head = newNode;
	else
		previous->next = newNode;
}

void LLClass::empty()
{
	if (listItems == 0)
		return "Empty"
	else
		return false;
}
/*
	Class: CS-230
	Assignment: Project 3
	Creator: MArcus Brock
*/
