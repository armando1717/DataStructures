#include <iostream>
#include "../interfaces/IList.h"
#include "../implementation/ArrayList.cpp"
//#include "../implementation/LinkedList.cpp"
#include "Student.h"

using namespace std;

int main(int argc, char * argv[]){
	IList<Student> *arrayList  = new ArrayList<Student>();
	Student s1;
	arrayList->insert(s1); 
	cout<<"arrayList size: "<<arrayList->getSize()<<endl;
	//IList<Student> *linkedList = new LinkedList<Student>();
	cout<<"arrayList IsEmpty: "<<arrayList->isEmpty()<<endl;
	//cout<<"LinkedList isEmpty?: "<<linkedList->isEmpty()<<endl;
	cout<<"list testing"<<endl;


}
