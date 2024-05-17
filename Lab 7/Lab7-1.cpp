#include<iostream>

using namespace std;

class Rectangle{
private:
float length1=0;
float width1=0;

public:
void setlength1(float Length1){
    length1=Length1;
}
void setwidth1(float Width1){
    width1=Width1;
}
float getlength1(){
    return length1;
}
float getwidth1(){
    return width1;
}
float area1(){
    return length1*width1;
}
Rectangle(){
    length1=0.0;
    width1=0.0;
}
Rectangle(float Length1,float Width1){
    length1=Length1;
    width1=Width1;
}
~Rectangle(){}

};

 
int main(){
float L1;
float W1;
    cout<<"Enter Length of the rectangle:"<<endl;
    cin>>L1;
cout<< "Enter Width of the rectangle :"<<endl;
    cin>>W1;

Rectangle rec1= Rectangle();
cout<<"Area of rectangle1"<<rec1.area1()<<endl;


Rectangle rec2=Rectangle(L1,W1);
rec2.setlength1(L1);
rec2.setwidth1(W1);
cout<<"Area of rectangle1"<<rec1.area1()<<endl;


    return 0;

}