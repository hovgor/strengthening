#include <iostream>
int main(){
std::cout<<"your factorial number: ";
int number = 0;
std::cin>>number;
int num=1;
int num1=0;
while(number!=1){
    num = num *number;
     --number;
}
std::cout<<" :"<<num<<std::endl;
return 0;}
