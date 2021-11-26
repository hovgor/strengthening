#include <iostream>
int main(){
std::cout<<"enter matricx size: ";
int size;
std::cin>>size;
int* *matrix = new int*[size];
std::cout<<"enter matricx value. \n";
for(int i = 0; i < size; ++i){
	 matrix[i]=new int[size];
}
for(int i = 0; i < size; ++i){
	for(int j = 0; j< size; ++j){
           std::cin>>matrix[i][j];
           }
}
int sizea = size*size;
int * arr=new int[sizea];

for(int i = 0, k = 0; i < size; ++i){
	for(int j =0;j<size;++j){
		arr[k]=matrix[i][j];
			++k;
	}

}
for(int i = 0; i< sizea; ++i){
        std::cout<<arr[i];
}
std::cout<<std::endl;

return 0;}
