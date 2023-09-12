//
//  main.cpp
//  ComplexNum
//
//  Created by aBoelghet  on 03/08/2023.
//

#include <iostream>

using namespace std;
class Complex{
    int real;
    int imag;
    static int no;
    public:
    
    void setImag(int _imag){
        real = 0;
        imag = _imag;
    }
    static int getCount(){
        return no;
    }
    void setReal(int _real){
        imag = 0;
        real = _real;
    }
    void setComplex(int _real,int _imag){
        real = _real;
        imag = _imag;
    }
    int getReal(){
        return real;
    }
    int getImg(){
        return imag;
    }
    Complex(){
        real = imag = 0;
        no ++;
        cout<<"Stack Constructor \n";
    }
    Complex(int _real,int _imag){
        real = _real;
        imag = _imag;
        no++;
        cout<<"Stack Constructor \n";

    }
    void print(){
        if (real == 0){
            if (imag == 0){
                cout<<"0"<<std::endl;
            }else{
                if (imag == 1){
                    cout<<"j"<<std::endl;
                }else if (imag == -1){
                    cout<<"-j"<<std::endl;
                }else{
                    cout<<imag<<"j"<<std::endl;
                }
            }
        }
        else if (imag>0){
            if (imag == 1){
                cout<<real<<"+"<<"j"<<std::endl;
            }else{
                cout<<real<<"+"<<imag<<"j"<<std::endl;
            }
        }
        else if (imag<0){
            if (imag == -1){
                cout<<real<<"-"<<imag<<"j"<<std::endl;
            }else{
                cout<<real<<imag<<"j"<<std::endl;
            }
        }
        else
            cout<<real<<std::endl;
    }
    Complex(Complex& s){
        real = s.real;
        imag = s.imag;
        no++;
        cout<<"Complex Copy Constructor \n";
    }
    ~Complex(){
        no --;
        cout << "Destructor called\n";
    }
};
int Complex::no = 0;

void myFunc(){
    Complex c;
    c.print();
}



int main(int argc, const char * argv[]) {
//    Complex c1(10,20);
    int size;
    cout<<"Enter the size of array :\n";
    cin>>size;
    Complex arrStatic[size];
    Complex* arrDynamic = new Complex[size];
    
    for(int i = 0;i< size;i++){
        int img;
        int real;
        cout<<"Enter the real of array element "<<i+1<<":\n";
        cin>>real;
        arrStatic[i].setReal(real);
        cout<<"Enter the imag of array element "<<i+1<<":\n";
        cin>>img;
        arrStatic[i].setImag(img);
    }
    for(int i = 0;i< size;i++){
        int img;
        int real;
        cout<<"Enter the real of dynamic array element "<<i+1<<":\n";
        cin>>real;
        arrDynamic[i].setReal(real);
        cout<<"Enter the imag of dynamic array element "<<i+1<<":\n";
        cin>>img;
        arrDynamic[i].setImag(img);
    }
    for(int i = 0;i< size;i++){
        arrStatic[i].print();
    }
    for(int i = 0;i< size;i++){
        arrDynamic[i].print();
    }
    cout<<Complex::getCount()<<"\n";
    delete []arrDynamic;
    cout<<Complex::getCount()<<"\n";

    
    

   
return 0;
}
