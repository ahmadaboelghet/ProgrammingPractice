//
//  main.cpp
//  Employee
//
//  Created by aBoelghet  on 06/08/2023.
//

#include <iostream>

class Employee{
    int id;
    int age;
    std::string name;
    
public:
    Employee(int _id,int _age,std::string _name){
        id = _id;
        age = _age;
        name = _name ;
    }
    void setid( int _id){
        id = _id;
        age = 28;
        name = "ahmad";
    }
    void setage( int _age){
        id = 0;
        age = _age;
        name = "ahmad";
    }
    void setname( std::string _name){
        id = 0;
        age = 28;
        name = _name;
    }
    
    int getid(){
        return id;
    }
    int getage(){
        return  age;
    }
    std::string getname(){
        return name;
    }
    void print(){
        std::cout<<id <<std::endl;
        std::cout<<age <<std::endl;
        std::cout<<name <<std::endl;
    }
    ~Employee(){
        std::cout << "Destructor called\n";
    }
    
    
};
void myFunc(){
    Employee e(3,29,"Abdallah");
}


int main(int argc, const char * argv[]) {
    Employee e1(2,28,"Ahmad");
    e1.print();
    e1.setage(29);
    e1.print();
    e1.setid(3);
    e1.print();
    e1.setname("Abdallah");
    e1.print();

    return 0;
}
