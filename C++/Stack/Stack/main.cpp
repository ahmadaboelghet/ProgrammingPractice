//
//  main.cpp
//  Stack
//
//  Created by aBoelghet  on 07/08/2023.
//

#include <iostream>

using namespace std;

class Stack{
    int tos = -1;
    int size;
    static int no;
    unique_ptr<int[]> arr;

public:
    static int getCount(){
        return no;
    }
    void push(int d){
        if (tos<size-1){
            tos ++;
            arr[tos] = d;
        }else{
            cout<<"Stack is full \n";
        }
    }
    int pop(int& d){
        if(tos!= -1){
            d = arr[tos];
            tos --;
            return  1;
        }else{
            cout<<"Stack is empty \n";
            return 0;
        }
    }
    
    void print(){
            cout<<size<<":"<<tos<<std::endl;
    }
    Stack(){
        tos = -1;
        size = 5;
        no ++;
        cout<<"Stack Constructor \n";
    }
    Stack(int _size){
        tos = -1;
        size = _size;
        no ++;
        cout<<"Stack Constructor \n";
    }
    friend void print(Stack s);
    
    Stack(Stack& s){
        size = s.size;
        tos = s.tos;
        for(int i=0;i<tos;i++){
            arr[i] = s.arr[i];
        }
        no ++;
            cout<<"Stack Constructor \n";
    }
    ~Stack(){
        no --;
            cout << "Destructor called\n";
    }
   
};
void print(Stack s){
        cout<<s.size<<":"<<s.tos<<std::endl;
}
int Stack::no = 0;



int main(int argc, const char * argv[]) {
    // insert code here...
    Stack s(10);
    Stack(s1);
    cout<<Stack::getCount()<<"\n";
    
   
    
    return 0;
}
