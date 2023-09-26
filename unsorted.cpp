#include "unsorted.hpp"
#include <cmath>
#include <cfloat>
#include <deque>
#include <fstream>
using namespace std;

UnsortedType::UnsortedType() //make a new object of UnsortedType
{
    length = 3;
    info = 978;
}

void UnsortedType::MakeEmpty() //empty out an existsing object of UnsortedType
{
    length = 0;
    info = 0;
    currentPos = -1;
}

bool UnsortedType::IsFull() const //check if our list is full 
{
    double full = pow(16, 15);
    long int maximum = full;
    if (info >= maximum) return true;
    else return false;

}

int UnsortedType::GetLength() const
{
    return length;
}

void UnsortedType::PutItem(int item) //insert function for adding an item into our list
{ 
    if (length == 0) {
        info = item;
        length = length + 1;
    }
    else {
        int n = length;
        double m = pow(16, n); 
        long int add_to_info = item * m; //mult item to insert * magic number to get value to add to info
        //add a check to see if this number added to info would be too big (over MAX_INT)
        info = info + add_to_info; //add to info, info will now be a new long int that represents our list
        length = length + 1; //increment length since we now have another value in our list
    }
}

void UnsortedType::DeleteItem(int item) //delete function for removing an item from our list 
{
    float temp_info = info;
    float list_item = 0;
    float item_to_delete = 0;
    float M;
    double m;
    double n = length - 1; // - 2 because we need to loop through the neumber of elements that we will have after deletion
    double z = n - 1;
    int interim = 0;
    

    //set the item we want to delete from the list equal to last item
    while (temp_info != 0) { 
        m = pow(16, n); //magic number startrs at 16^ (length - 1)
        M = m; 
        item_to_delete = temp_info / M; 
        item_to_delete = floor(item_to_delete); //floor the item
        temp_info = fmod(temp_info, M); //update info that we modulus by to get next item
        n--;

        if (item_to_delete != item) {
            if (z >= 0) interim += item_to_delete * pow(16, z);
            else interim += item_to_delete * 1;
            z--;
        } 
    }
            info = interim;
            length--;
            currentPos--;

}

void UnsortedType::ResetList() //reset list as if it was just constructed 
{
    info = 0;
    length = 0;
    currentPos = -1;
}

int UnsortedType::GetNextItem() 
{
    float temp_info = info;
    float item = 0;
    float M;
    double m;
    double n = currentPos + 1;

    m = pow(16, n); //magic number is 16^ (currentPos + 1)
    M = m; //double m but as a float so we can use fmod() 
    item = temp_info / M; //get the item by dividing list info by magic number
    item = floor(item); //floor the item
    return item;

}

//"neatly prints the contents of a list on the screen, in a column, 
//one list element per line, in the same order that the elements appear in the list"
void UnsortedType::PrintList(ofstream &outfile)
{
   outfile.open("output.txt", ios::app);//ios:app allows for appending to file, does not overwrite contents
    if (length == 0) {
        cout << "Empty" << endl;
        outfile << endl;
    }
    else {
        deque<int> print; //deques have a fast push_front
        float temp_info = info;
        float item = 0;
        float M;
        double m;
        double n = length - 1;
        int to_print;
//        while (temp_info != 0) {
          while (n >= 0) {
            //get Magic number M
            m = pow(16, n); //pow returns double
            M = m; //but we do this b/c need M as a float for fmod since info is float
            //find our value
            item = temp_info / M;
            //floor our value so we can store it into deque for printing 
            to_print = floor(item); 
            //store in deque
            print.push_front(to_print);
            //update temp info
            temp_info = fmod(temp_info, M);
            //update n so magic number M updates
            n--;
            //eventually n = 0, so M = 1, and temp_info % M = 0 so loops stops
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
    float temp_info = info;
    float list_item = 0;
    float M;
    double m;
    double n = length - 1;
    currentPos = length;
    while (temp_info != 0) { 
        m = pow(16, n); //magic number is 16^ (length - 1)
        M = m; //double m but as a float so we can use fmod() 
        list_item = temp_info / M; //get the item by dividing list info by magic number
        list_item = floor(list_item); //floor the item
        temp_info = fmod(info, M); //update info that we modulus by to get next item
        n--; //make sure to decrement n so magic number is accurate for every iteration
        currentPos--; // keep track of our position in list`
        if (list_item == item) { //if we find item, return it and state were it is in list
            found = true;
            cout << "Item " << item << " is at element: " << currentPos << endl;
            return item;
        } 
        
    }
    return item;
}

//I added this one because customer isnt always right smh why is there no easy way to look at this variable from main
int UnsortedType::GetCurrPos()
{
    return currentPos;
}