#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "../interfaces/IList.h"

template <class T>

class LinkedList: public IList<T>
{
	public:
	 bool isEmpty();
	bool insert(T data);
};

#endif
