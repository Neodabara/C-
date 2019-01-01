/*
	Name: Marcus Brock
	Assignment: Project 2
	Class: CS-230
*/


#include <cstdlib>
#include <iostream>
#include "FancyList.h"

using namespace std;

	//There seems to be a problem that arises whereever I have the array mentioned in my code. For example:
	
		FancyList::FancyList()
		{
			maxSize = 10;
			size = 0;
			arrayPtr = new itemType[maxSize];
		}
		
		FancyList::FancyList(int newSize)
		{
			maxSize = newSize;
			size = 0;
			arrayPtr = new itemType[maxSize];
		}
		
		FancyList::~FancyList()
		{
			if (arrayPtr != NULL) //as does this
				delete [] arrayPtr;
		}
		
		//I'm not entirely sure what is wrong with my code, but no matter how long I look at it I can't seem to find the problem.
		
		void FancyList::addItem(itemType item)
		{
			if (size <= maxSize)
			{
				if (size == maxSize)
				{
					int temp [size];
				
					for (int i = 0; i < size; i++)
						temp[i] = arrayPtr[i];
					
					maxSize *= 2;
					
					arrayPtr = new int[maxSize];
					
					for (int i =  0; i < size; i++)
						arrayPtr[i] = temp[i];
				}
				
				arrayPtr[size] = item;
				size++;
			}
		}
		
		FancyList::getItem(int index) 
		{
			//cout<<arrayPtr[index];
			return arrayPtr[index];
		}
		
		FancyList::getSize()
		{
			return size;
		}
		
		ostream& operator<<(ostream& os, const FancyList& obj)
		{
			os << "The list contains: " << endl;
			for (int i = 0 ; i < obj.size; i++)
			{
				os << "* " << obj.arrayPtr[i] << endl;
			}
			
			return os;
		}
		
		istream& operator >> (istream& is, FancyList& obj)
		{
			itemType item;
			is >> item;
			obj.addItem(item);
			return is;
		}
		
		bool FancyList::operator==(const FancyList& right) const
		{
			if (size != right.size)
				return false;
			for (int i = 0; i < size; i++)
				if (arrayPtr[i] != right.arrayPtr[i])
					return false;
			return true;
		}
		
		void FancyList::operator + (const FancyList& obj) 
		{
			for (int i = 0; i < obj.size; i++)
				addItem(obj.arrayPtr[i]);
		}
		
		vector<itemType> FancyList::getVector()
		{
			vector<itemType> v(arrayPtr, arrayPtr + size);
			return v;
		}
		
		

int main()
{
	FancyList eh;
	eh.addItem(1);
	eh.addItem(2);
	eh.addItem(3);
	eh.addItem(4);
	eh.addItem(5);
	eh.addItem(6);
	int size;
	cout<<"Enter size: ";
	cin>>size;
	FancyList list(size);
	for (int i = 0; i < size ; i++)
	{
		cout<<"Enter thing: ";
		cin >> list;	
	}

	list + eh;
	cout << list;
	
	cout<<endl;
	
/*	if (list == eh)
		cout<<"ye"<<endl;
	else
		cout<<"ne"<<endl; */
		
	vector<itemType> v = list.getVector();
	for (int i = 0; i < list.getSize(); i++)
		cout<<v[i]<<endl;
	
	return 0;
}
