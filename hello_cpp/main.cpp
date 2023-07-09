
#include "Header.h"
#include <cstdlib>
#include <iostream>
#include <stdio.h>

struct Cat{
	char * name;
	int age;
	Cat(const char* name)
	{
		this->name = (char*)malloc(sizeof(char) * (strlen(name) + 1));
		strcpy(this->name, name);
		age = 0;
	}
	~Cat()
	{
		std::cout << "cat destroy" << std::endl;
		free(name);

	}
};



 int main() { 
	// print_num(5); // -> Which version will be called ? 
 //print_num(5.f); // -> Which version will be called ? 
 //print_num(5.); // -> Which version will be called ? 
	 //heyy

 ////std::cout << inverse_num(0.1);
 //std::cout << inverse_num(5.1);

	 Cat c("nora");
	 Cat c("nora");
	 Cat c("nora");
	 Cat c("nora");
	 Cat c("nora");
	 Cat c("nora2");
	 Cat c("nora");
	 Cat c("nora");
	 Cat c("nora");
	 

 //moshe changes..
	
//test
	 //same place
	 //change






 //std::cout << inverse_num(0.1);
 std::cout << inverse_num(5.1);
 return 0;
 }