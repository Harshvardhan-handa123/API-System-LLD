#ifndef response_hpp
#define response_hpp
#include "request.hpp"
class Response{
    public:
    Response();
    virtual void getResponse(Request request) = 0;
};
#endif
