#include <iostream>
#ifndef LLCLASS_H
#define LLCLASS_H
#include<string>
#include<vector>

using namespace std;

class Node 
{
	int data;
	Node* next;
	Node(int);
};

class LLClass
{
	private:
		Node* head;
		int listItems;
		Node* current;
	public:
		LLClass();
		int size;
		void push_front(int);
		void push_back(int);
		void destroy(int);
		void destroyAll();
		int sizeOfList();
		void insert(int, int);
		void empty();
};

#endif



/*
	Class: CS-230
	Assignment: Project 3
	Creator: MArcus Brock
*/
