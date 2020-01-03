#include "lib.h"
#include <fstream>

using namespace std;

float read_file(ifstream &in,float f[2]){
  int i=0;
  if(in.is_open()) {
    while (!in.eof()){
      in>>f[i];
      ++i;
    }
    if (i<2) {
      throw domain_error("ошибка");
    } else {
      return f[2];
    }
  }
  else throw runtime_error("ошибка");
}


float division(float f[2]){
  if(f[1]==0){
    throw invalid_argument("ошибка");
  }
  return f[0]/f[1];
}
