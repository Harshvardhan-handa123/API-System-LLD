#include<iostream>
using namespace std;
#include "factory.hpp"

Factory :: Factory(){}

Response* Factory:: GenerateResponse(Request *request){
    if(request->requeststr[0] == 'A'){
        return new ResponseA();
    }else if(request->requeststr[0] == 'B'){
        return new ResponseB();
    }else{
        return nullptr;
    }
}