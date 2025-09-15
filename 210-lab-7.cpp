// COMSC210 | Lab 7 | Heidi Pico
// IDE USED: VS CODE

#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5; 

string * reverseArray(string* arr, int size){
    for(int i = 0; i<= size/2; i++){
        string temp = *(arr + i);
        *(arr + i) = *(arr + (size - 1 - i));
        *(arr + (size - 1 - i)) = temp;
    }
    return arr;
}

void displayArray(string* arr, int size){
    cout << "Outputting array elements: ";
    for(int i = 0; i < size; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
}
