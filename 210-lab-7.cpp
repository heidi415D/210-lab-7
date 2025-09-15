// COMSC210 | Lab 7 | Heidi Pico
// IDE USED: VS CODE

#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5; 

// function to reverse the array
string * reverseArray(string* arr, int size){
    for(int i = 0; i< size/2; i++){
        string temp = *(arr + i);
        *(arr + i) = *(arr + (size - 1 - i));
        *(arr + (size - 1 - i)) = temp;
    }
    return arr; // return the pointer to the reversed array
}

// function to display the array
void displayArray(string* arr, int size){
    for(int i = 0; i < size; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main(){
    string* names = new string[SIZE]; // dynamically allocate array

    *(names + 0) = "Janet";
    *(names + 1) = "Jeffe";
    *(names + 2) = "Jin";
    *(names + 3) = "Joe";
    *(names + 4) = "Junio";

   // output original
    cout << "Original array: ";
     displayArray(names, SIZE); 
    cout << endl;

    // reverse the array
    names = reverseArray(names, SIZE);

    // output reversed
    cout << "Reversed array: ";
     displayArray(names, SIZE);
    cout << endl;

    delete[] names; // free allocated memory

    return 0;

}
