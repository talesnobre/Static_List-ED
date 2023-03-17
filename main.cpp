#include "lista_sequencial.h"
#include "test.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  
  if (argc > 1) {
    int t = stoi(argv[1]);

    Test(t);
  } else {
    std::cout << "Para alguns testes rode o programa passando um numero entre 1 e 5" << std::endl;
  }

  return 0;
}
