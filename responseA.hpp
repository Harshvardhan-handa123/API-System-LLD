#ifndef responseA_hpp
#define responseA_hpp
#include "response.hpp"
class ResponseA : public Response{
  public:
  ResponseA();
  void getResponse(Request request) override;
};
#endif