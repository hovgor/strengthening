#include <iostream>
int main(){
std::cout<<"Hello bebe, enter your array size: ";
int size ;
std::cin>>size;
int *arr=new int[size];
std::cout<<"enter your array elements. \n";
for(int i =0; i <size; ++i){
	std::cin>>arr[i];
}
float numdiv = 0.0;
for(int i =0;i<size;++i){
	numdiv+=arr[i];
}
std::cout<<"esi gumari mijin tvabanakanna:) "<<numdiv / size<<std::endl;
double nummul=1;
for(int i =0;i<size; ++i){
	nummul*=arr[i];
}
std::cout<<"esi artadryali mijin tvabannakanna:) "<<nummul / size<<std::endl;
return 0;
}
