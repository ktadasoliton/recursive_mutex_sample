
  // Copyright 2018 Kota Tadaa
#include <stdio.h>

#ifdef _MSC_VER
#include <Windows.h>
#endif

#include "rmutex/recursive_mutex.h"

void main() {
  while (1) {
#ifdef _MSC_VER
    Sleep(1000);
#endif

    printf("main\n");
    Mutex_().lock();
    Work1();
    Mutex_().unlock();
  }
}

void Work1() {
  Mutex_().lock();
  printf("work1\n");
  Work2();
  Mutex_().unlock();
}

void Work2() {
  Mutex_().lock();
  printf("work2\n");
  Work3();
  Mutex_().unlock();
}

void Work3() {
  Mutex_().lock();
  printf("work3\n");
  Work4();
  Mutex_().unlock();
}

void Work4() {
  Mutex_().lock();
  printf("work4\n");
  Work5();
  Mutex_().unlock();
}

void Work5() {
  std::lock_guard<std::recursive_mutex> lock(Mutex_());
  printf("work5\n");
}

std::recursive_mutex& Mutex_() {
  static std::recursive_mutex mutex;
  return mutex;
}
