#ifndef responseB_hpp
#define responseB_hpp
#include "response.hpp"
class ResponseB : public Response{
  public:
  ResponseB();
  void getResponse(Request request) override;
};
#endif