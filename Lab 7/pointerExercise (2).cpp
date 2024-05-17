#include <iostream>
using namespace std;

void SwapNumbers(int &vrA, int &vrB){
  int i=vrB; 
  vrB=vrA;
  vrA= i;
}
int main(){ 
int varA = 25;
int &vrA= varA;

int varB = 100;
int &vrB=varB;

cout << "varA before swap: " << varA << endl; //varA is 25 
cout << "VarB before swap: " << varB << endl; //varB is 100 
SwapNumbers(varA, varB); 
cout << "varA after swap: " << varA << endl; //varA is 100
cout << "VarB after swap: " << varB << endl; //varB is 25 

return 0; 
}