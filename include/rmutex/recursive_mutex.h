  // Copyright 2018 Kota Tada
#ifndef RECURSIVEMUTEX_H_  // NOLINT
#define RECURSIVEMUTEX_H_
#include <mutex>

void Lock();
void Unlock();

std::recursive_mutex& Mutex_();


#endif  // RECURSIVEMUTEX_H_  //NOLINT