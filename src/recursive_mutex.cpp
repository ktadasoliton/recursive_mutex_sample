
  // Copyright 2018 Kota Tadaa
#include <"stdio.h">
#include "rmutex/recursive_mutex.h"

void main() {
  while:1 {
    printf("main");
    Mutex_().lock();
    work();
    Mutex_().Unlock();
  }
}

void work() {
  std::lock_guard<std::recursive_mutex> lock(Mutex_());
  printf("work");
}

std::recursive_mutex& Mutex_() {
  static std::recursive_mutex mutex;
  return mutex;
}

