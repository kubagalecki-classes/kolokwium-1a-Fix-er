#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake..
void obliczMake(std::vector<Tagliatelle> v){
double M=0;
for_each(v.end(),v.begin(),[&](Tagliatelle it){
  int i=1;
 double N += it->ileMaki(i);
 M += N;
  i++;
  return M;
});
if (M>100){
return int c=50;
} else if (M>50 || M==100){
  return double c=32;
}else{
  return M;
}
};