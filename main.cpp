#include <iostream>
#include <fstream>
#include <string>
#include "unsorted.hpp"
using namespace std;

ofstream outfile;

int main() {
    
    int outy;
    int item_to_find1 = 13;
    bool is_in_list = false;
    bool is_full;

    UnsortedType List1; //make a list
    
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Our list, info = 978, begins with the values 2, 13, 3 in it." << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Test : PrintList()" << endl;
    List1.PrintList(outfile);

    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test : GetLength()" << endl;
    outy = List1.GetLength();
    cout << "List Length: " << outy << endl;

    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: MakeEmpty()" << endl;
    List1.MakeEmpty();
    outy = List1.GetLength();
    cout << "List Length after MakeEmpty(): " << outy << endl; 
    
    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: PutItem(): 2, 13, 3 are put in our list." << endl;
    List1.PutItem(2);
    List1.PutItem(13);
    List1.PutItem(3);
    cout << endl;
    outy = List1.GetLength();
    cout << "List Length: " << outy << endl;

    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: PrintList()" << endl;
    List1.PrintList(outfile);

    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: GetItem()" << endl;
    List1.GetItem(item_to_find1, is_in_list);
    if (is_in_list == true) {
        cout << "Is " << item_to_find1 << " in our list? (1 = T, 0 = F): " << is_in_list << endl;
    }
    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: GetNextItem()" << endl;
    outy = List1.GetNextItem();
    cout << "Next item after " << item_to_find1 << " is: " << outy << endl;

    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: DeleteItem()" << endl;
    cout << "List before deleting '13': " << endl;
    List1.PrintList(outfile);
    cout << endl;
    List1.DeleteItem(item_to_find1);
    cout << "List after deleting '13': " << endl;
    List1.PrintList(outfile);
    cout << endl;

    cout <<"List Length:" << endl;
    outy = List1.GetLength();
    cout << outy << endl;
    
    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: IsFull()" << endl;
    is_full = List1.IsFull();
    cout << "Is our List full? (1 = T, 0 = F): " << is_full << endl;
    
    cout << endl;



    //prep for next list to test
    List1.ResetList();
    cout << "List is reset. List contents: " << endl;
    List1.PrintList(outfile);
    outy = List1.GetLength();
    cout << "Length: " << endl;
    cout << outy << endl;
    
    List1.PutItem(7);
    List1.PutItem(4);
    List1.PutItem(12);
    List1.PutItem(15);
    List1.PutItem(3);
    List1.PutItem(9);   
    cout << endl;

    item_to_find1 = 15;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Our list, info = 9698375 begins with the values: " << endl;
    cout << "Test: PutItem(): 7, 4, 12, 15, 3, 9 in it." << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Test : PrintList()" << endl;
    List1.PrintList(outfile);
    cout << endl;

    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test : GetLength()" << endl;
    outy = List1.GetLength();
    cout << "List Length: " << outy << endl;

    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: MakeEmpty()" << endl;
    List1.MakeEmpty();
    outy = List1.GetLength();
    cout << "List Length after MakeEmpty(): " << outy << endl; 
    
    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: PutItem(): 7, 4, 12, 15, 3, 9 are put in our list." << endl;
    List1.PutItem(7);
    List1.PutItem(4);
    List1.PutItem(12);
    List1.PutItem(15);
    List1.PutItem(3);
    List1.PutItem(9);
    cout << endl;
    outy = List1.GetLength();
    cout << "List Length: " << outy << endl;

    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: PrintList()" << endl;
    List1.PrintList(outfile);

    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: GetItem(15)" << endl;
    List1.GetItem(item_to_find1, is_in_list);
    if (is_in_list == true) {
        cout << "Is " << item_to_find1 << " in our list? (1 = T, 0 = F): " << is_in_list << endl;
    }

    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: GetNextItem()" << endl;
    outy = List1.GetNextItem();
    cout << "Next item after " << item_to_find1 << " is: " << outy << endl;

    cout << "=======================================================================" << endl;
    cout << "Test: DeleteItem()" << endl;
    cout << "List before deleting '15': " << endl;
    List1.PrintList(outfile);
    cout << endl;
    List1.DeleteItem(item_to_find1);
    cout << "List after deleting '15': " << endl;
    List1.PrintList(outfile);
    cout << endl;

    cout <<"List Length:" << endl;
    outy = List1.GetLength();
    cout << outy << endl;
    
    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: IsFull()" << endl;
    is_full = List1.IsFull();
    cout << "Is our List full? (1 = T, 0 = F): " << is_full << endl;
    
    List1.ResetList();
    cout << "List is reset. List contents: " << endl;
    List1.PrintList(outfile);
    outy = List1.GetLength();
    cout << "Length: " << endl;
    cout << outy << endl;
    
    List1.PutItem(1);
    List1.PutItem(2);
    List1.PutItem(3);
    List1.PutItem(4);
    List1.PutItem(5);
    List1.PutItem(6);
    List1.PutItem(7);
    List1.PutItem(8);
    List1.PutItem(9);
    List1.PutItem(10);
    List1.PutItem(11);
    List1.PutItem(12);
    List1.PutItem(13);
    List1.PutItem(14);
    List1.PutItem(15); 
    cout << endl;

    item_to_find1 = 6;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Our list, info = 1,147,797,409,030,816,500 begins with the values: " << endl;
    cout << "Test: PutItem(): 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 in it." << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Test : PrintList()" << endl;
    List1.PrintList(outfile);
    cout << endl;

    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test : GetLength()" << endl;
    outy = List1.GetLength();
    cout << "List Length: " << outy << endl;

    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: MakeEmpty()" << endl;
    List1.MakeEmpty();
    outy = List1.GetLength();
    cout << "List Length after MakeEmpty(): " << outy << endl; 
    
    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: PutItem(): 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 are put in our list." << endl;
    List1.PutItem(1);
    List1.PutItem(2);
    List1.PutItem(3);
    List1.PutItem(4);
    List1.PutItem(5);
    List1.PutItem(6);
    List1.PutItem(7);
    List1.PutItem(8);
    List1.PutItem(9);
    List1.PutItem(10);
    List1.PutItem(11);
    List1.PutItem(12);
    List1.PutItem(13);
    List1.PutItem(14);
    List1.PutItem(15); 
    cout << endl;
    outy = List1.GetLength();
    cout << "List Length: " << outy << endl;
    cout << endl;

    cout << "=======================================================================" << endl;
    cout << "Test: PrintList()" << endl;
    List1.PrintList(outfile);

    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: GetItem()" << endl;
    List1.GetItem(item_to_find1, is_in_list);
    if (is_in_list == true) {
        cout << "Is " << item_to_find1 << " in our list? (1 = T, 0 = F): " << is_in_list << endl;
    }
 
    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: GetNextItem()" << endl;
    outy = List1.GetNextItem();
    cout << "Next item after " << item_to_find1 << " is: " << outy << endl;

    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: IsFull()" << endl;
    is_full = List1.IsFull();
    cout << "Is our List full? (1 = T, 0 = F): " << is_full << endl;
    
    cout << endl;
    cout << "=======================================================================" << endl;
    cout << "Test: DeleteItem()" << endl;
    cout << "List before deleting '6': " << endl;
    List1.PrintList(outfile);
    cout << endl;
    List1.DeleteItem(item_to_find1);
    cout << "List after deleting '6': " << endl;
    List1.PrintList(outfile);
    cout << endl;

    cout <<"List Length:" << endl;
    outy = List1.GetLength();
    cout << outy << endl;
    
    cout << endl;

    return 0;
}