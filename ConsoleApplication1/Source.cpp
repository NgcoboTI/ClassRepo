#include <iostream>
#include <string>

using namespace std;
//inheritance example

class Animal{

protected:
	string name;
public:
	Animal(){
		name = "Animal";
	}
	void whoAmi(void){
		cout << "I am "<< name << endl;

	}
	virtual void does(void){
		cout << "do nothing" << endl;
	}

};

class Dog :public Animal{
protected :
	int numberLegs;
public:
	Dog()
	{
		name = "Dog";
		numberLegs = 4;
	}
	void does(void)
	{
		cout << "Woof!" << endl;
	}
	int howManyLegs(){
		return numberLegs;
	}
};
//main class 
int main()
{
	Animal myAnimal;
	Dog myDog;

	//using class base pointers
	Animal *animalPtr;

	animalPtr = &myDog;


	myAnimal.whoAmi();
	myAnimal.does();

    myDog.whoAmi();
	myDog.does();

	cout << "Dogs have " << myDog.howManyLegs()<< " legs." <<endl;
	cout << "Using base class pointer from the derieved class " << endl;

	animalPtr->whoAmi();
	animalPtr->does();


}