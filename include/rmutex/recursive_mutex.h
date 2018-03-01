  // Copyright 2018 Kota Tada
#ifndef RECURSIVEMUTEX_H_  // NOLINT
#define RECURSIVEMUTEX_H_
#include <mutex>

void Work1();
void Work2();
void Work3();
void Work4();
void Work5();
std::recursive_mutex& Mutex_();

#endif  // RECURSIVEMUTEX_H_  //NOLINT

