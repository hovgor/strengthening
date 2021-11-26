#include <iostream>
int main(){
int size;
std::cout<<"enter size \n";
std::cin>>size;
int* arr=new int[size];
std::cout<<"enter elements \n";
for(int i = 0; i < size ; ++i){
	std::cin>>arr[i];
}
int max = arr[0];
int max_index = 0;
for(int i = 1; i < size; ++i){
	if(max < arr[i]){
         max = arr[i];
	 max_index = i;
         }

}
delete [] arr;
std::cout << "max element: "<< max <<std::endl;
std::cout << "max index: "<< max_index << std::endl;
return 0;}
