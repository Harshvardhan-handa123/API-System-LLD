#ifndef factory_hpp
#define factory_hpp
#include "responseA.hpp"
#include "responseB.hpp"

class Factory{
   public:
   Factory();
   //Working : To generate the response as per the type of request.
   // Return type : Response*.
   //Input parameter : Request*.
   Response *GenerateResponse(Request *request);
};

#endif