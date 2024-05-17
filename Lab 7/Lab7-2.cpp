#include<iostream>

using namespace std;

namespace Shapes{

}

class Square{
private:
float side_length1=0;


public:
void setLength1(float Length1){
    side_length1=Length1;
}

float getLength1(){
    return side_length1;
}

Square();
Square(float Length1){
    side_length1=Length1;
}

~Square(){}

};

class Triangle{
private:
float base=0;
float height=0;

public:
void setBase(float Base ){
   base=Base;
}
void setHeight(float Height ){
   height=Height;
}
float getBase(){
    return base;
}
float getHeight(){
    return height;
}

Triangle(){};
Triangle(float Base,float Height){
    base=Base;
    height=Height;
}

~Triangle(){}

};

class Circle{
private:
float radius=0;


public:
void setRadius(float Radius){
    radius=Radius;
}

float getRadius(){
    return radius;
}

Circle();
Circle(float Radius){
    radius=Radius;
}

~Circle(){}

};

class Area{
public:

float S_area(Square length){
    return getline()*getLength1();
}
float T_area(Triangle base,Triangle height){
    return 0.5*getBase()*getHeight();
}
 float C_area(){
    
    return getRadius()*getRadius()*3.14159;
}

};

 
int main(){

cout<< "Hello world\n" ;
    return 0;

}