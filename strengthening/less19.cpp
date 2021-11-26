#include <iostream>
int main(){
std::cout << "enter array size \n";
int size = 0;
std::cin >> size;
int *arr = new int[size];
std::cout << "enter arr elements \n";
for(int i =0; i < size; ++i){
     std::cin >> arr[i];
  }
int min = arr[0];
int max = arr[1];
for (int i = 0; i< size; ++i){
  if(min > arr[i]){
    min = arr[i];
   }
  if(max < arr[i]){
    max = arr[i];
   }
  }
std::cout << "arr max element: " << max << std::endl;
std::cout << "arr min element: " << min << std::endl;



std::cout << "revers array \n";
std::cout << '{';
for (int i = size - 1; i >= 0; --i){
   if (i == 0){
      std::cout << arr[0] << '}' << std::endl << std::endl;
     break;
     }
    std::cout << arr[i] << ',';
  }
delete [] arr;


std::cout << "enter new array elements\n\n";
int * arr1 = new int[size];
int * arr2 = new int[size];

for(int i = 0; i < size; ++i){
	std::cout << "first arr1 element: ";
    std::cin >> arr1[i];
	std::cout << "next arr2 element: ";
    std::cin >> arr2[i];
  }
std::cout << "adder your 2 arrays \n";
std::cout << '{';
for (int i = 0; i < size; ++i){
    if (i == size - 1){
         std::cout << arr1[size - 1] + arr2[size - 1] << '}' << std::endl;
	break;
     }
    std::cout << arr1[i] + arr2[i] <<',';


  }

delete [] arr1;
delete [] arr2;

return 0;
}
