#include <iostream>
#include <fstream>
#include <string>
#include "unsorted.hpp"
using namespace std;

ofstream outfile;

void die() { //if theres a bad input, throw error, clear cin error state
    cout << "BAD INPUT" << endl;
    outfile.open("output.txt", ios::app);//ios:app allows for appending to file, does not overwrite contents
    outfile << "\nBAD INPUT\n";
    outfile.close();
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    
    //outfile.open("output.txt", ios::app);//ios:app allows for appending to file, does not overwrite contents
    UnsortedType List; //make a list

    int item_to_put = 40;
    cout << "Test 1: MakeEmpty()" << endl;
    List.MakeEmpty();

    cout << "Test 2: PrintList()" << endl;
    List.PrintList(outfile);

    cout << "Test 3: PutItem(int item_to_put = 40)" << endl;
    List.PutItem(item_to_put);




    return 0;
}