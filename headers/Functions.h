// pre-processor directives
#include <string>
#include <iostream>

// use C++ standard library namespace
using namespace std;

// this function uses the strlen function in string.h
void congradulate2(string student, string language, string programmer){
    // declare and initialize local variable by
    // calling strlen
    int days = programmer.length();

    // display a message to stdout
    printf("%s has done as much %s programming as %s could fit into %d days.\n", student.c_str(), language.c_str(), programmer.c_str(), days);
    //cout << student << " has done as much " << language << " programming as " << programmer << " could fit into " << days << "." << endl;
}


void congradulate1(string student, string language, string programmer){
    // display a message to stdout
    // printf("%s has done as much %s programming as %s.\n", student, language, programmer);
    cout << student << " has done as much " << language << " programming as " << programmer << "." << endl;
    congradulate2(student, language, programmer);
}