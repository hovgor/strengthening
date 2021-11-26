#include <iostream>
int main(){
std::cout << "enter your number : ";
int num;
std::cin>>num;
if (num < 0)
std::cout<< "your move number is negative\n"; 
for (int i =num;i>=0;--i ){
	std::cout<< i <<std::endl;
}
return 0;
}
