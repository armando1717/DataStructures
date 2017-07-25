#include <iostream>
#include "ArrayList.h"


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
	bool ArrayList<T>::insert(T data){
		container[size] = data;
		size++;
	}

template <typename T>
	T* ArrayList<T>::toArray(){
		
		return container;
	}

template <typename T>
	int ArrayList<T>::getSize(){
		return size;
	}
