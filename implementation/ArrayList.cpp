#include <iostream>
#include "ArrayList.h"
#include <cstring>

using namespace std;

template <typename T>
	ArrayList<T>::ArrayList(){
		size =0;
	}

template <typename T>
	bool ArrayList<T>::isEmpty(){
		if(size == 0)
			return true;
		return false;
	}
template <typename T>
	bool ArrayList<T>::isFull(){
		if(size == ARRAY_LENGTH){
			return true;
		}
		return false;
	}	

template <typename T>
	bool ArrayList<T>::insert(T* data){
		//if(isFull()){
		//	duplicateArraySize();
		//}
		container[size] = *data;
		size++;
	}

template <typename T>
	T* ArrayList<T>::toArray(){
		T *temp = new T[size];
		memcpy(temp, container, sizeof(T)*size);	
		return temp;
	}

template <typename T>
	int ArrayList<T>::getSize(){
		return size;
	}


template <typename T>
	void ArrayList<T>::duplicateArraySize(){
		int temp[size];
		//container = new T[]
		memcpy(container, temp, size*sizeof(T));
	}
