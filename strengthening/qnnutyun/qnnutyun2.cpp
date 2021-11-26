#include <iostream>
int main(){
double d = 3.14;
double *pd = &d;
*pd +=0.1;
double **ppd = &pd;
**ppd=4.02;
std::cout<<d;



return 0;}
