#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake..
double obliczMake(std::vector<Tagliatelle> v){
  using namespace std;
  double M=0;
  int i=1;
  for_each(v.rbegin(),v.rend(),[&](Tagliatelle it){
  
 double N = it.ileMaki(i);
 M += N;
  i++;
});
if (M>100){
int c=50;
throw (c);}
else if(M>50){
double d=50;
throw (d);
}else{
  return M;
}
};