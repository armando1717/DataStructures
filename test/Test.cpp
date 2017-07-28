#include <iostream>
#include "../interfaces/IList.h"
#include "../implementation/ArrayList.cpp"
//#include "../implementation/LinkedList.cpp"
#include "Student.h"

using namespace std;


void showList(Student *list, int size){
	for(int i=0; i<size;i++)
		cout<<" "<<list[i].getAge();
}


int main(int argc, char * argv[]){
	IList<Student> *arrayList  = new ArrayList<Student>();
	for(int i=0; i<5; i++){
		Student *s2 = new Student();
		s2->setAge(i);
		arrayList->insert(s2); 
	}
	Student *arr = new Student[arrayList->getSize()];

	arr = arrayList->toArray();
	arr[3].setAge(34);
	Student *arr2 = new Student[arrayList->getSize()];
	arr2 = arrayList->toArray();
	//cout<< arr[4].getAge()<<endl;
	//cout<<"arrayList size: "<<arrayList->getSize()<<endl;
	//IList<Student> *linkedList = new LinkedList<Student>();
	//cout<<"arrayList IsEmpty: "<<arrayList->isEmpty()<<endl;
	//cout<<"LinkedList isEmpty?: "<<linkedList->isEmpty()<<endl;
	//cout<<"list testing"<<endl;
	cout<<"size: "<<arrayList->getSize()<<endl; 
	showList(arr2, arrayList->getSize());
	cout<<endl;
	showList(arr, arrayList->getSize());

}
