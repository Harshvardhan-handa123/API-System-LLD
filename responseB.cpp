#include "responseB.hpp"
#include<iostream>

using namespace std;

ResponseB :: ResponseB(){}

void ResponseB :: getResponse(Request request){
     cout << "Generating a response for " << request.requeststr << " type of request" << endl;

}