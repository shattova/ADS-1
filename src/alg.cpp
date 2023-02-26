// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  for (uint64_t a = 2; a * a <= value; a++) {
    if (value % a == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t amount = 0;
  uint64_t numb = 0;
  for (int a = 2; numb < n; a++) {
    if (checkPrime(a)) {
      amount = a;
      numb++;
    }
  }
  return amount;
}

uint64_t nextPrime(uint64_t value) {
  int a = value + 1;
  while (!checkPrime(a)) {
    a++;
  }
  return a;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (int a = 2; a < hbound; a++) {
    if (checkPrime(a)) {
      sum += a;
    }
  }
  return sum;
}
