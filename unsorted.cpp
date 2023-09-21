#include "unsorted.hpp"
#include <cmath>
#include <cfloat>
#include <deque>
#include <fstream>
using namespace std;

UnsortedType::UnsortedType() //make a new object of UnsortedType
{
}

void UnsortedType::MakeEmpty() //empty out an existsing object of UnsortedType
{
    length = 0;
    info = 0;
}

bool UnsortedType::IsFull() const //check if our list is full 
{
    if (info == FLT_MAX ) return true; // this isnt it
    else return false;
}

int UnsortedType::GetLength() const
{
    return length;
}

void UnsortedType::PutItem(int item) //insert function for adding an item into our list
{ 
    int n = length;
    double m = pow(16, n); 
    int add_to_info = item * m; //mult item to insert * magic number to get value to add to info
        //add a check to see if this number added to info would be too big (over MAX_INT)
    info = add_to_info + info; //add to info, info will now be a new long int that represents our list
    length++; //increment length since we now have another value in our list
}

void UnsortedType::DeleteItem(int item) //delete function for removing an item from our list 
{
    //use a formula to delete item from info
}

void UnsortedType::ResetList() //wtf does this mean 
{
    info = 0; //f it we ball
}

int UnsortedType::GetNextItem() //GetItem 2: Electric Boogaloo
{
    return 0;
}

//"neatly prints the contents of a list on the screen, in a column, 
//one list element per line, in the same order that the elements appear in the list"
void UnsortedType::PrintList(ofstream &outfile)
{
    outfile.open("output.txt", ios::app);//ios:app allows for appending to file, does not overwrite contents
    if (length == 0) {
        cout << "empty" << endl;
        outfile << "empty";
        outfile << endl;
    }
    else {
        deque<int> print; //deques have a fast push_front
        int n = length - 1;
        double m = 0; //magic number which we use to get value at a specific element
        for (int i = length - 1; i >= 0; i--) { //same loop as in GetItem 
            m = pow(16, n); //magic number is 16^ (length - 1)
            float M = m; // double m but as a float so we can use fmod()
        //  int temp_item = info % m; //get the item at that element via info modulus magic number
            float temp_item = fmod(info, M);
            int to_print = temp_item;
            print.push_front(temp_item);
            n--; //make sure to decrement n so magic number is accurate for every iteration
        }

        for (int i = 0; i < print.size(); i++) {
            int outs = print.at(i);
            cout << outs << endl;
            outfile << outs << endl; 
        } 
    
    }
    outfile.close();
}

int UnsortedType::GetItem(int item, bool &found) //search function for our list
{
    //info
    //length
    
    int n = length - 1;
    double m = 0; //magic number which we use to get value at a specific element
    for (int i = 0; i < length - 1; i++) { //loop until we find a match for item we are looking for
        m = pow(16, n); //magic number is 16^ (length - 1)
        float M = m; //double m but as a float so we can use fmod() 
        int temp_i = info / m; //get the element by dividing info by magic number
        temp_i = floor(temp_i); //floor the element
        float temp_item = fmod(info, M); //get the item at that element via info modulus magic number
        n--; //make sure to decrement n so magic number is accurate for every iteration
        if (temp_item == item) { //if we find item, return it and state were it is in list
            found = true;
            cout << "Item " << temp_item << "is at element: " << temp_i << endl;
            return item;
          
        } 
        
    }
    cout << "Item not found in this list." << endl;

    return item;
}