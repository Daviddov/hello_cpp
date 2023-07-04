
#include "Header.h"
#include <iostream>

 int main() { 
	 print_num(5); // -> Which version will be called ? 
 print_num(5.f); // -> Which version will be called ? 
 print_num(5.); // -> Which version will be called ? 


 //std::cout << inverse_num(0.1);
 std::cout << inverse_num(5.1);
 return 0;
 }