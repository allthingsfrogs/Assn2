#include <iostream>
using namespace std;

//const long MAX_ITEMS = 15;
class UnsortedType // declares a class data type
{
public :
//  public member functions
    UnsortedType();
    void MakeEmpty();
    bool IsFull() const;
    int GetLength() const; // returns length of list
    int GetItem(int item, bool& found);
    void PutItem(int item);
    void DeleteItem (int item);
    void ResetList();
    int GetNextItem();
    void PrintList(ofstream& outfile);

private :
    // 3 private data members
    int length; 
    long int info; //our list of items, each item is an int itself
    const int MAX_ITEMS = INT_MAX; //the max number of space available in the long int.
                         //long int max size (use sizeof to find out)
    //int currentPos;
};