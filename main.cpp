#include <iostream>
#include "subject.h"

void RealSubject::request()
{
  std::cout << "Real Subject request" << std::endl;
}

Proxy::Proxy()
{
  subject = new RealSubject();
}

Proxy::~Proxy()
{
  delete subject;
}

void Proxy::request()
{
  subject->request();
}

int main()
{
  Proxy *proxy = new Proxy();
  proxy->request();
 
  delete proxy;
  return 0;
}
