#include <iostream>
void rec(int num);
int main(){
std::cout<<"enter number: ";
int number = 0;
std::cin>> number;
rec(number);
return 0;}
void rec(int num){
	if (num > 0){
	std::cout<<num<<std::endl;
	rec(--num);
	}else{
	std::cout<< 0<<std::endl;
	}
}
