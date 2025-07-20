#include<iostream>
#include "factory.hpp"
using namespace std;

int main(){
    string reqType;
    cin>>reqType;
    Factory factory;
    Request *request = new Request(reqType);
   // Response * response =  Factory::GenerateResponse(request);
    Response * response =  factory.GenerateResponse(request);
    //response -> Response :: getResponse(request);
    response -> getResponse(request);
    return 0;
}