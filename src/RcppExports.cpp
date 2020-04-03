// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// perm_test
List perm_test(bool const logarithm, unsigned int const P, unsigned int const N_breaks, arma::vec cluster_ids, unsigned int const n_clusters, arma::vec sample_ids, unsigned int const n_samples, arma::vec group_ids_of_samples, double const min_counts_per_group, arma::vec group_ids, arma::mat& counts, unsigned int const nCores);
RcppExport SEXP _distinct_perm_test(SEXP logarithmSEXP, SEXP PSEXP, SEXP N_breaksSEXP, SEXP cluster_idsSEXP, SEXP n_clustersSEXP, SEXP sample_idsSEXP, SEXP n_samplesSEXP, SEXP group_ids_of_samplesSEXP, SEXP min_counts_per_groupSEXP, SEXP group_idsSEXP, SEXP countsSEXP, SEXP nCoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool const >::type logarithm(logarithmSEXP);
    Rcpp::traits::input_parameter< unsigned int const >::type P(PSEXP);
    Rcpp::traits::input_parameter< unsigned int const >::type N_breaks(N_breaksSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type cluster_ids(cluster_idsSEXP);
    Rcpp::traits::input_parameter< unsigned int const >::type n_clusters(n_clustersSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sample_ids(sample_idsSEXP);
    Rcpp::traits::input_parameter< unsigned int const >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type group_ids_of_samples(group_ids_of_samplesSEXP);
    Rcpp::traits::input_parameter< double const >::type min_counts_per_group(min_counts_per_groupSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type group_ids(group_idsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< unsigned int const >::type nCores(nCoresSEXP);
    rcpp_result_gen = Rcpp::wrap(perm_test(logarithm, P, N_breaks, cluster_ids, n_clusters, sample_ids, n_samples, group_ids_of_samples, min_counts_per_group, group_ids, counts, nCores));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_distinct_perm_test", (DL_FUNC) &_distinct_perm_test, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_distinct(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
