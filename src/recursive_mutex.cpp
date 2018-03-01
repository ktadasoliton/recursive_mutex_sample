
  // Copyright 2018 Kota Tadaa
#include <stdio.h>
#include <Windows.h>
#include "rmutex/recursive_mutex.h"

void main() {
  while (1) {
    Sleep(1000);
    printf("main\n");
    Mutex_().lock();
    Work();
    Mutex_().unlock();
  }
}

void Work() {
  std::lock_guard<std::recursive_mutex> lock(Mutex_());
  printf("work\n");
}

std::recursive_mutex& Mutex_() {
  static std::recursive_mutex mutex;
  return mutex;
}