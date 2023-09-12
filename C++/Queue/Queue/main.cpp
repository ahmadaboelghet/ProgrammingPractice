//
//  main.cpp
//  Queue
//
//  Created by aBoelghet  on 08/08/2023.
//

#include <iostream>

using namespace std;

class Queue{
    int *arr;
    int front;
    int rear;
    int maxSize;
public:
    Queue(int _size){
        maxSize = _size;
        arr = new int[maxSize];
        front = -1;
        rear = 0;
    }
    void Insert(int d) {
        if (rear == maxSize - 1)
            cout<<"Queue Overflow"<<endl;
        else {
            if (front == - 1){
                front = 0;
            }
            rear++;
            arr[rear] = d;
        }
    }
    int Delete(int& d) {
        if (front == - 1 || front > rear) {
            cout<<"Queue Underflow ";
            return 0;
        } else {
            d = arr[front];
            front++;
            return 1;
            
        }
    }
    void print() {
        if (front == - 1)
            cout<<"Queue is empty"<<endl;
        else {
            cout<<"Queue elements are : ";
            for (int i = front; i <= rear; i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
};

int main(){
    
    Queue q1(5);
   
  
   
    q1.print();
    return 0;
}

