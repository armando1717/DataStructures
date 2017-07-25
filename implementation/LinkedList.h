#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "../interfaces/IList.h"

template <class T>

class LinkedList: public IList<T>
{
	//temp
	static const int size=10;
	T temp[size];
	public:
		bool isEmpty();
		bool insert(T data);
		T* toArray();
};

#endif
