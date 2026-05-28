/*
 * C++ Design Patterns: Proxy
 * Author: Jakub Vojvoda [github.com/JakubVojvoda]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#ifndef SUBJECT_H
#define SUBJECT_H

class Subject
{
public:
  virtual ~Subject() { /* ... */ }

  virtual void request() = 0;
  // ...
};

class RealSubject : public Subject
{
public:
  void request() override;
  // ...
};

class Proxy : public Subject
{
public:
  Proxy();
  ~Proxy();
 
  void request() override;
  // ...

private:
  RealSubject *subject;
};

#endif 
