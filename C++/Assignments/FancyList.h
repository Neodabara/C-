#ifndef FANCYLIST_H
#define FANCYLIST_H

#include <iostream>
using namespace std;
#include <vector>

typedef int itemType;

class FancyList 
{
	public:
		FancyList();
		FancyList(int maxSize);
		~FancyList();
		void addItem(itemType item);
		
		itemType getItem(int index);
		
		friend std::ostream& operator<<(std::ostream& os, const FancyList& obj);
		
		friend std::istream& operator >> (std::istream& is, FancyList& obj);
		
		void operator + (const FancyList& obj);
		
		bool operator==(const FancyList& right) const;
		
		int getSize();               // I was having problems with getting these two
		void setSize(int size);     // to work properly.
		
		vector<itemType> getVector();
		
	private:
		
		itemType *arrayPtr;
		
		int size;
		
		int maxSize;
		
		
};
#endif
