#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <iostream>
#include "../interfaces/IList.h"

template <class T>
class ArrayList : public IList<T>{
	static const int ARRAY_LENGTH=50;
	T container[ARRAY_LENGTH];
public:
	bool isEmpty();
	bool insert(T data);
	T* toArray();
};


#endif
