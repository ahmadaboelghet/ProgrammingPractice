//
//  main.cpp
//  AddComplex
//
//  Created by aBoelghet  on 03/08/2023.
//

#include <iostream>

struct Complex{
    int real1;
    int imag1;
   
    
    
    void add(){
        int realsum = real1;
        int imagsum = imag1;
        if (imagsum>0){
            if (imagsum == 1){
                std::cout<<realsum<<std::endl;
            }else{
                std::cout<<realsum<<"+"<<imagsum<<"j"<<std::endl;
            }
            
        }
        else if (imagsum<0){
            if (imagsum == -1){
                std::cout<<realsum<<std::endl;
            }else{
                std::cout<<realsum<<imagsum<<"j"<<std::endl;
            }
        }
        else
            std::cout<<realsum<<std::endl;
    }
};
void add(Complex c1){
    c1.realsum = c1.real1+c1.real2;
    c1.imagsum = c1.imag1+c1.img2;
    if (c1.imagsum>0){
        if (c1.imagsum == 1){
            std::cout<<c1.realsum<<std::endl;
        }else{
            std::cout<<c1.realsum<<"+"<<c1.imagsum<<"j"<<std::endl;
        }
        
    }
    else if (c1.imagsum<0){
        if (c1.imagsum == -1){
            std::cout<<c1.realsum<<std::endl;
        }else{
            std::cout<<c1.realsum<<c1.imagsum<<"j"<<std::endl;
        }
    }
    else
        std::cout<<c1.realsum<<std::endl;
}


int main(int argc, const char * argv[]) {
    Complex c1;
    std::cout<<"Please enter real part value of first num: "<<std::endl;
    std::cin>>c1.real1;
    std::cout<<"Please enter imaginary part value of first num: "<<std::endl;
    std::cin>>c1.imag1;
    std::cout<<"Please enter real part value of second num: "<<std::endl;
    std::cin>>c1.real2;
    std::cout<<"Please enter imaginary part value of second num: "<<std::endl;
    std::cin>>c1.img2;
    c1.add();
    add(c1);
    return 0;
}
