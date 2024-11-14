#include<iostream>
#include<set>
using namespace std;


// Global variable
set<int> students;

void add_student() {
    students.insert(1);  // Modifying global variable
}

int main() {
    students.insert(2);  // Modifying global variable in main
    add_student();       // Calling function that modifies global variable
    for (auto student : students) {
        cout << student << " ";  // Output: 1 2
    }
    return 0;
}