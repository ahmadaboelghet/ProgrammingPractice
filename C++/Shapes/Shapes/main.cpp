//
//  main.cpp
//  Shapes
//
//  Created by aBoelghet  on 10/08/2023.
//

#include <iostream>

using namespace std;

class Point{
    int x;
    int y;
public:
    void set_x(int _x){
        x = _x;
    }
    void set_y(int _y){
        y = _y;
    }
    void setPoint(int _x,int _y){
        x = _x;
        y = _x;
    }
    int get_x(){
        return  x;
    }
    int get_y(){
        return y;
    }
    Point(){
        x = y = 0;
        cout<<"Parameterless Constructor"<<endl;
        
    }
    Point(int _x){
        x = y = _x;
        cout<<"One Parameter Constructor"<<endl;
        
    }
    Point(int _x,int _y){
        x = _x;
        y = _y;
        cout<<"Two Parameters Constructor"<<endl;
        
    }
    void print(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    ~Point(){
        cout<<"Point Destructor"<<endl;

    }
};

class Shape{
public:
//    virtual void paint()= 0;
    
};
class Rectangle:public Shape{
    Point ul,lr;
public:
    void setUL(int _x,int _y) {
        ul.setPoint(_x, _y);
       
    }
    void setLR(int _x,int _y){
        lr.setPoint(_x, _y);
       
    }
    void paint(){
        cout<<"Rectangle Print\n";
        ul.print();
        lr.print();
        
    }
    Rectangle(){
        cout<<"Rectangle Parameterless Constructor"<<endl;
        
    }
    Rectangle(int x1,int y1,int x2,int y2):ul(x1, y1),lr(x2, y2){
        cout<<"Rectangle 4 Parameter Constructor"<<endl;
        
    }
    ~Rectangle(){
        cout<<"Rectangulatr Destructor"<<endl;

    }
};

class Triangle:public Shape{
    Point h1,h2,h3;
public:
    void seth1(int _x,int _y) {
        h1.setPoint(_x, _y);
       
    }
    void seth2(int _x,int _y){
        h2.setPoint(_x, _y);
       
    }
    void seth3(int _x,int _y){
        h3.setPoint(_x, _y);
       
    }
    void paint(){
        cout<<"Triangle Print\n";
        h1.print();
        h2.print();
        h3.print();
        
    }
    Triangle(){
        cout<<"Triangle Parameterless Constructor"<<endl;
        
    }
    Triangle(int x1,int y1,int x2,int y2,int x3,int y3):h1(x1, y1),h2(x2, y2),h3(x2, y2){
        cout<<"Triangle 4 Parameter Constructor"<<endl;
        
    }
    ~Triangle(){
        cout<<"Triangle Destructor"<<endl;

    }
};

class Circle:public Shape{
    Point c;
    int r;
public:
    void set_c(int _x,int _y) {
        c.setPoint(_x, _y);
       
    }
    void seth2(int _r){
        r = _r;
       
    }
   
    void paint(){
        cout<<"Circle Print\n";
        cout<<"Radius is: "<<r<<endl;
        c.print();
       
        
    }
    Circle(){
        cout<<"Circle Parameterless Constructor"<<endl;
        
    }
    Circle(int x1,int y1, int r):c(x1, y1),r(r){
        
        cout<<"Circle 4 Parameter Constructor"<<endl;
        
    }
    ~Circle(){
        cout<<"Circle Destructor"<<endl;

    }
        
};
//class Pic{
//    Rectangle* rarr;
//    Circle* carr;
//    Triangle* tarr;
//    int n_rarr,n_carr,n_tarr;
//public:
//    Rectangle* getRetangle(){
//        return rarr;
//    }
//    int getRectangleCount(){
//        return n_rarr;
//    }
//    Circle* getCircle(){
//        return carr;
//    }
//    int getCircleCount(){
//        return n_carr;
//    }
//    Triangle* getTriangle(){
//        return tarr;
//    }
//    int getTriangleCount(){
//        return n_tarr;
//    }
//
//    void setRarr(Rectangle* _rarr,int _n_rarr){
//        rarr = _rarr;
//
//        if (rarr == NULL){
//            n_rarr = 0;
//        }else{
//
//            n_rarr = _n_rarr;
//        }
//    }
//    void setCarr(Circle* _carr,int _n_carr){
//        carr = _carr;
//
//        if (carr == NULL){
//            n_carr = 0;
//        }else{
//
//            n_carr = _n_carr;
//        }
//    }
//    void setTriangle(Triangle* _tarr,int _n_tarr){
//        tarr = _tarr;
//
//        if (tarr == NULL){
//            n_tarr = 0;
//        }else{
//
//            n_tarr = _n_tarr;
//        }
//    }
//
//    Pic(){
//        rarr = NULL;
//        carr = NULL;
//        tarr = NULL;
//        n_rarr = n_carr = n_tarr = 0;
//        cout<<"Pic Parmeterless Constructor"<<endl;
//    }
//    Pic(Rectangle* r,Circle* c,Triangle* t,int _n_rarr,int _n_carr,int _n_tarr){
//        rarr = r;
//        carr = c;
//        tarr = t;
//        cout<<"Pic All Parmeters Constructor"<<endl;
//    }
//    ~Pic(){
//        cout<<"Pic Destructor"<<endl;
//
//    }
//    void draw(){
//        for(int i = 0;i<n_rarr;i++){
//            rarr[i].paint();
//        }
//        for(int i = 0;i<n_carr;i++){
//            carr[i].paint();
//        }
//        for(int i = 0;i<n_tarr;i++){
//            tarr[i].paint();
//        }
//    }
//
//};

class Pic{
protected:
    Shape* arr;
    int n;
public:
    Shape* getShape(){
        return arr;
    }
    int getShapeCount(){
        return n;
    }
    
    void setSarr(Shape* _arr,int _n){
        arr = _arr;
        
        if (arr == NULL){
            n = 0;
        }else{
            
            n = _n;
        }
    }

    Pic(){
        arr = NULL;
        n = 0;
        cout<<"Pic Parmeterless Constructor"<<endl;
    }
    Pic(Shape* s,int _n){
        arr = s;
        
        cout<<"Pic All Parmeters Constructor"<<endl;
    }
    ~Pic(){
        cout<<"Pic Destructor"<<endl;

    }
   
};

//void paintShapes(Shape* arr[],int n){
//
//    for(int i = 0;i < n;i++){
//        arr[i]->paint();
//    }
//
//}

int main(int argc, const char * argv[]) {
    // insert code here...
    Shape s;
    Rectangle r(1,2,3,4);
    Circle c(1,2,7);
    Triangle t(3,4,5,6,7,8);
    Shape * arr[3];
    arr[0]= &r;
    arr[1]= &t;
    arr[2]= &c;
//    paintShapes(arr, 3);
    
    return 0;
}
