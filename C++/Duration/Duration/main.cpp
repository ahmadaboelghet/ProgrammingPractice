//
//  main.cpp
//  Duration
//
//  Created by aBoelghet  on 10/08/2023.
//

#include <iostream>

using namespace::std;

class Duration{
    int hours;
    int min;
    int seconds;
public:
    int gethours(){
        return hours;
    }
    int getMin(){
        return min;
    }
    int getSeconds(){
        return  seconds;
    }
    void setHours(int _hours){
        hours = _hours;
        min = 0;
        seconds = 0;
    }
    void setMins(int _mins){
        min = _mins;
        hours = 0;
        seconds = 0;
    }
    void setSeconds(int _seconds){
        seconds = _seconds;
        hours = 0;
        min = 0;
    }
    Duration(){
        hours = seconds = min = 0;
    }
    
    Duration(int _hours,int _mins,int _seconds){
        hours = _hours;
        seconds = _seconds;
        min = _mins;
    }
    Duration(int _no_of_seconds){
         hours = _no_of_seconds / 3600;
         min = (_no_of_seconds % 3600) / 60;
         seconds = _no_of_seconds % 60;
        
    }
    Duration operator+(Duration d){
        Duration res(hours + d.hours,min + d.min,seconds + d.seconds);
        return res;
    }
    Duration operator+(int no){
        int no_hours = no / 3600;
        int no_min = (no % 3600) / 60;
        int no_seconds = no % 60;
        Duration res(hours + no_hours,min + no_min,seconds + no_seconds);
        return res;
    }
    Duration operator +=(Duration d){
        hours =  hours + d.hours;
        min = min + d.min;
        seconds = seconds + d.seconds;
        
        return *this;
    }
    int operator >(Duration d){
        if(hours>d.hours && min>d.min && seconds>d.seconds){
            return  1;
        }else{
            return 0;
        }
    }
    int operator <=(Duration d){
        if(hours<=d.hours && min<=d.min && seconds<=d.seconds){
            return  1;
        }else{
            return 0;
        }
    }
    Duration operator ++(){
        min += 1;
        return *this;
    }
    Duration operator --(){
        min -= 1;
        return *this;
    }
    explicit operator int(){
        int no_seconds = hours * 3600 + min*60 + seconds;
        return no_seconds ;
    }
    void print(){
        
        if (hours != 0){
            cout<<"Hours: "<<hours<<" Minutes: "<<min<<" Seconds: "<<seconds<<endl;
        }else{
            cout<<"Minutes: "<<min<<" Seconds: "<<seconds<<endl;
        }
    }
    
};
Duration operator+(int no,Duration d){
    int no_hours = no / 3600;
    int no_min = (no % 3600) / 60;
    int no_seconds = no % 60;
    Duration res(d.gethours() + no_hours,d.getMin() + no_min,d.getSeconds() + no_seconds);
    return res;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    Duration d1(3,43,56);
    d1.print();
    Duration d2(556);
    Duration d3(435);
    Duration res;
    res = d1 += d2;
    
    int obj = int(d3);
    res.print();
    return 0;
}
