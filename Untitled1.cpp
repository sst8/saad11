#include <iostream>
#include <new>
int main(){

    const int gib=12 ;  
    int *ptr = new int[gib];
    std::cout <<"sizeof of int:  "<< sizeof (int)*gib << std::endl;
    std::cout <<"Value is : "<<  *ptr << std::endl;
    std::cout <<"Memory Address is : "<< ptr << std::endl;
    delete[] ptr;
    return 0;
}

