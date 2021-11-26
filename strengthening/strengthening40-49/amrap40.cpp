#include <iostream>
int fac(int x);
int main(){
int a = 0;
std::cin>>a;
std::cout<<fac(a)<<std::endl;
return 0;}
int fac(int x){
	if(x<1){return 1;}
	return x*fac(x-1);
}

