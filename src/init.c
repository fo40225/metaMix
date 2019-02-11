#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP C_rmultinom_weight(SEXP, SEXP, SEXP);
/*extern SEXP mpi_finalize();*/

static const R_CallMethodDef CallEntries[] = {
    {"C_rmultinom_weight", (DL_FUNC) &C_rmultinom_weight, 3},
    /*    {"mpi_finalize",       (DL_FUNC) &mpi_finalize,       0},*/
    {NULL, NULL, 0}
};

void R_init_metaMix(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
