#include <iostream>
using namespace std;

#define MAX_LENGTH 100

int main()
{
	char name[MAX_LENGTH]={0};
	int age;
	
	cout<< "Enter your Name: ";
	cin.getline(name,MAX_LENGTH);
	
	//im going 22 this year
	std::cout<< "Enter your Age: ";  
	std::cin>> age;
	int birthyear = 2021 - age; 


	
	cout<< "Hi! I am " <<name<<", my birthyear is "<< birthyear<<". \n";
	cout<< "Thank you.";

	
}
