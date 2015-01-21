// Demonstrate how to pass objects back to R using the REPORT macro
#include <TMB.hpp>
template<class Type>
Type objective_function<Type>::operator() ()
{
  DATA_VECTOR        (a);
  DATA_ARRAY         (b);
  DATA_MATRIX        (c);
  DATA_SPARSE_MATRIX (d);
  PARAMETER          (p);

  REPORT(a);
  REPORT(b);
  REPORT(c);
  REPORT(d);
  REPORT(p);

  return 0;
}
