#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

// Function to swap two variables using a temporary variable
void SwapNumbers(int* ptrA, int* ptrB){
    int t= *ptrA;
    *ptrA = *ptrB;
    *ptrB = t;
}

int main() {
    int varA = 25;
    int varB = 100;


    // Call the swap function with pointers
SwapNumbers(&varA, &varB);

cout << "varA before swap: " << varA << endl; //varA is 25 
cout << "VarB before swap: " << varB << endl; //varB is 100 
SwapNumbers(&varA, &varB); 
cout << "varA after swap: " << varA << endl; //varA is 100
cout << "VarB after swap: " << varB << endl; //varB is 25 

return 0; 
}