#include <iostream>
#include "interfaces/IList.h"
#include "implementation/ArrayList.cpp"
#include "implementation/LinkedList.cpp"
#include "Student.h"

using namespace std;

int main(int argc, char * argv[]){
	IList<Student> *arrayList  = new ArrayList<Student>();
	IList<Student> *linkedList = new LinkedList<Student>();
	cout<<"IsEmpty: "<<arrayList->isEmpty()<<endl;
	cout<<"LinkedList isEmpty?: "<<linkedList->isEmpty()<<endl;
	cout<<"list testing"<<endl;


}
