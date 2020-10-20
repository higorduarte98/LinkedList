#include "Exception.hpp"
#include <cstring>
#include <iostream>

using namespace std;

Exception::Exception(const char* msg){
    this->msg = strdup(msg);
}

void Exception::printMessageError(){
    cout << msg << endl;
};