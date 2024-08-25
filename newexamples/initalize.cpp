//#include <assert.h>
#include <string>
#include <regex>
#include <cassert>
#include <iostream>

struct Person{
    // private:
    //     string name{1};
    
        std::string name;
        //constructor class
        Person(std::string name) : name(name){
        }

        // //accessor function
        // int Name(){
        //     return name;
        // }

        // //mutator function
        // void Name(string s){
        //     //Make regex
        //     regex regx("][@_!#$%&*()<>?/|}{:");
        //     //invariants for the mutator function to prevent SQL injection etc
        //     if (regex_search(s, regex)==0) name = s;
        // }   
};

int main(){
    Person alice("Alice");
    Person bob("Bob");
    assert(alice.name != bob.name);
    std::cout << "[Pass] " << alice.name << " is not the same as " << bob.name << "... assertion checks out." << "\n";

}

