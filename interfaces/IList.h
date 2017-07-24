#ifndef ILIST_H
#define ILIST_H

#include <iostream>

template <class T>

class IList{

public:
	virtual bool isEmpty()=0;
	virtual bool insert(T data)=0;
	virtual T* toArray()=0;

};


#endif
