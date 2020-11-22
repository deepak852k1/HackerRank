#include <iostream>
#include <sstream>
using namespace std;

class Student {
    public:
    int age;
    char first_name[50];
    char last_name[50];
    int standard;
};

int main() {
   
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    
    
    cout <<age<< "\n";
    cout <<last_name<< ", " <<first_name<< "\n";
    cout<<standard;
    cout << "\n"<<"\n";
    cout <<age<<","<<first_name<<","<<last_name<<","<<standard;
    
    return 0;
}
