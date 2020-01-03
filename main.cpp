#include <iostream>
#include <fstream>
#include "lib.h"

using namespace std;
ifstream file ("../f.txt");

int main() {
  float f[2];
  try{
    f[2]=read_file(file,f);
    cout<<f[0]<<'\n';
    cout<<f[1]<<'\n';
    cout<<division(f);
    }catch (runtime_error) {
    cout << "файла не существует";
    }catch (domain_error){
    cout<<"чисел в файле не хватает";
    }catch(invalid_argument){
    cout<<"поделить на 0 невозможно";
  }

}
