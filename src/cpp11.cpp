// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"

// split_str.cpp
std::vector<std::string> split_str(const std::string& str, int splitLength);
extern "C" SEXP _vcr_split_str(SEXP str, SEXP splitLength) {
  BEGIN_CPP11
    return cpp11::as_sexp(split_str(cpp11::as_cpp<cpp11::decay_t<const std::string&>>(str), cpp11::as_cpp<cpp11::decay_t<int>>(splitLength)));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _vcr_split_str(SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_vcr_split_str", (DL_FUNC) &_vcr_split_str, 2},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_vcr(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
