// Copyright 2022 NNTU-CS
#include <cstdint>
#include <iostream>
#include "alg.h"
using namespace std;
bool checkPrime(uint64_t value) {
  for (i = 2; i <= sqrt(value); i++) {
    if (value % i == 0) {
      return true;
    }else{
      return false;
    }
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
}
