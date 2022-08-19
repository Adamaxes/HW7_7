#include <iostream>
#include "container.h"

int main()
{
    int length =0;
    cout<<"Enter the length"<<endl;
    cin>>length;
    try {
        // Declare an array with 10 elements
        IntArray array(length);
        cout<<"Array has been created"<<endl;
    }
    catch (exception &e)
    {
        cout<<e.what()<<endl;
    }
    IntArray array(length);
    // Fill the array with numbers 1 through 10
    for (int i{ 0 }; i<10; ++i)
        array[i] = i+1;

    // Resize the array to 8 elements
    cout<<"Enter the new length"<<endl;
    int newLength=0;
    cin>>newLength;
    array.resize(newLength);

    // Insert the number 20 before element with index 5
    int value=0;
    int index=0;
    cout<<"Enter the value and index"<<endl;
    cin>>value>>index;
    try {
        array.insertBefore(value, index);
        cout<<"Inserted Before"<<endl;
    }
    catch (exception &e)
    {
        cout<<e.what()<<endl;
    }

    // Remove the element with index 3
    index=0;
    cout<<"Enter the index of element which you want to remove"<<endl;
    cin>>index;
    try{
        array.remove(index);
        cout<<"Elements has been removed"<<endl;
    }
    catch (exception &e)
    {
        cout<<e.what();
    }
    // Add 30 and 40 to the end and beginning
    value=0;
    cout<<"Enter the value which you want to insert at end of the array"<<endl;
    cin>>value;
   try
   {
       array.insertAtEnd(value);
       cout<<"Inserted at end"<<endl;
   }
   catch (exception &e){
       cout<<e.what();
   }
   value=0;
   cout<<"Enter the value which you want to insert at the Beginning"<<endl;
   cin>>value;
    try
    {
        array.insertAtBeginning(value);
        cout<<"Inserted at beginning"<<endl;
    }
    catch (exception &e){
        cout<<e.what();
    }

    // Print out all the numbers
    for (int i{ 0 }; i<array.getLength(); ++i)
        std::cout << array[i] << ' ';

    std::cout << '\n';
    return 0;
}