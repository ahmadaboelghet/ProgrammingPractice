//
//  main.cpp
//  DynamicArrOfInt
//
//  Created by aBoelghet  on 03/08/2023.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int size;
    std::cout<<"Please enter the size of array: "<<std::endl;
    std::cin>>size;
    int* ptr = new int[size];
    for(int i =0;i<size;i++){
        std::cout<<"Please enter the array elements number: " << i +1 <<std::endl;
        std::cin>>ptr[i];
    }
    std::cout<<"The array elements are :";
    for(int i =0;i<size;i++){
        std::cout<<ptr[i];
    }
    delete[] ptr;
    return 0;
}
