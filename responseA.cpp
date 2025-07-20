#include "responseA.hpp"
#include<iostream>

using namespace std;

ResponseA :: ResponseA(){}

void ResponseA :: getResponse(Request request){
     cout << "Generating a response for " << request.requeststr << " type of request" << endl;

}

