// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// mean_rice_R
double mean_rice_R(double nu, double sigma);
RcppExport SEXP _symR_mean_rice_R(SEXP nuSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(mean_rice_R(nu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// J
Eigen::SparseMatrix<double> J(int n);
RcppExport SEXP _symR_J(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(J(n));
    return rcpp_result_gen;
END_RCPP
}
// eigenvals_J
Eigen::VectorXd eigenvals_J(int n);
RcppExport SEXP _symR_eigenvals_J(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenvals_J(n));
    return rcpp_result_gen;
END_RCPP
}
// Bloch_eqn_R
Eigen::VectorXd Bloch_eqn_R(const Eigen::Map<Eigen::VectorXd> W_row, const Eigen::Map<Eigen::VectorXd> TE, const Eigen::Map<Eigen::VectorXd> TR);
RcppExport SEXP _symR_Bloch_eqn_R(SEXP W_rowSEXP, SEXP TESEXP, SEXP TRSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type W_row(W_rowSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type TE(TESEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd> >::type TR(TRSEXP);
    rcpp_result_gen = Rcpp::wrap(Bloch_eqn_R(W_row, TE, TR));
    return rcpp_result_gen;
END_RCPP
}
// v_mat_R
Eigen::MatrixXd v_mat_R(const Eigen::Map<Eigen::MatrixXd>& W, const Eigen::Map<Eigen::VectorXd>& TE, const Eigen::Map<Eigen::VectorXd>& TR);
RcppExport SEXP _symR_v_mat_R(SEXP WSEXP, SEXP TESEXP, SEXP TRSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type W(WSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TE(TESEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TR(TRSEXP);
    rcpp_result_gen = Rcpp::wrap(v_mat_R(W, TE, TR));
    return rcpp_result_gen;
END_RCPP
}
// Generate_r
Eigen::MatrixXd Generate_r(const Eigen::Map<Eigen::MatrixXd>& W, const Eigen::Map<Eigen::VectorXd>& TE, const Eigen::Map<Eigen::VectorXd>& TR, const Eigen::Map<Eigen::VectorXd>& sigma);
RcppExport SEXP _symR_Generate_r(SEXP WSEXP, SEXP TESEXP, SEXP TRSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type W(WSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TE(TESEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TR(TRSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(Generate_r(W, TE, TR, sigma));
    return rcpp_result_gen;
END_RCPP
}
// dee_v_ij_dee_W_ik
double dee_v_ij_dee_W_ik(const Eigen::Map<Eigen::VectorXd>& W_row, const Eigen::Map<Eigen::VectorXd>& TE, const Eigen::Map<Eigen::VectorXd>& TR, int j, int k);
RcppExport SEXP _symR_dee_v_ij_dee_W_ik(SEXP W_rowSEXP, SEXP TESEXP, SEXP TRSEXP, SEXP jSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type W_row(W_rowSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TE(TESEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TR(TRSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(dee_v_ij_dee_W_ik(W_row, TE, TR, j, k));
    return rcpp_result_gen;
END_RCPP
}
// dee_2_v_ij_dee_W_ik_dee_W_ik1
double dee_2_v_ij_dee_W_ik_dee_W_ik1(const Eigen::Map<Eigen::VectorXd>& W_row, const Eigen::Map<Eigen::VectorXd>& TE, const Eigen::Map<Eigen::VectorXd>& TR, int j, int k, int k1);
RcppExport SEXP _symR_dee_2_v_ij_dee_W_ik_dee_W_ik1(SEXP W_rowSEXP, SEXP TESEXP, SEXP TRSEXP, SEXP jSEXP, SEXP kSEXP, SEXP k1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type W_row(W_rowSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TE(TESEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TR(TRSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type k1(k1SEXP);
    rcpp_result_gen = Rcpp::wrap(dee_2_v_ij_dee_W_ik_dee_W_ik1(W_row, TE, TR, j, k, k1));
    return rcpp_result_gen;
END_RCPP
}
// Init_val_least_sq_R
Eigen::MatrixXd Init_val_least_sq_R(const Eigen::Map<Eigen::MatrixXd>& train, const Eigen::Map<Eigen::VectorXd>& TE_train, const Eigen::Map<Eigen::VectorXd>& TR_train, Eigen::Map<Eigen::VectorXd> our_dim_1, double train_scale, double TE_scale, double TR_scale, double W_1_init, double W_2_init);
RcppExport SEXP _symR_Init_val_least_sq_R(SEXP trainSEXP, SEXP TE_trainSEXP, SEXP TR_trainSEXP, SEXP our_dim_1SEXP, SEXP train_scaleSEXP, SEXP TE_scaleSEXP, SEXP TR_scaleSEXP, SEXP W_1_initSEXP, SEXP W_2_initSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type train(trainSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TE_train(TE_trainSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TR_train(TR_trainSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type our_dim_1(our_dim_1SEXP);
    Rcpp::traits::input_parameter< double >::type train_scale(train_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type TE_scale(TE_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type TR_scale(TR_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type W_1_init(W_1_initSEXP);
    Rcpp::traits::input_parameter< double >::type W_2_init(W_2_initSEXP);
    rcpp_result_gen = Rcpp::wrap(Init_val_least_sq_R(train, TE_train, TR_train, our_dim_1, train_scale, TE_scale, TR_scale, W_1_init, W_2_init));
    return rcpp_result_gen;
END_RCPP
}
// AECM_R
Rcpp::List AECM_R(Eigen::MatrixXd W, Eigen::Map<Eigen::VectorXd> our_dim_1, const Eigen::Map<Eigen::VectorXd>& TE_train, const Eigen::Map<Eigen::VectorXd>& TR_train, const Eigen::Map<Eigen::VectorXd>& sigma_train, const Eigen::Map<Eigen::MatrixXd>& train, double train_scale, double TE_scale, double TR_scale, const Eigen::Map<Eigen::VectorXd>& black_list, int maxiter, int penalized, double abs_diff, double rel_diff, int verbose, int verbose2);
RcppExport SEXP _symR_AECM_R(SEXP WSEXP, SEXP our_dim_1SEXP, SEXP TE_trainSEXP, SEXP TR_trainSEXP, SEXP sigma_trainSEXP, SEXP trainSEXP, SEXP train_scaleSEXP, SEXP TE_scaleSEXP, SEXP TR_scaleSEXP, SEXP black_listSEXP, SEXP maxiterSEXP, SEXP penalizedSEXP, SEXP abs_diffSEXP, SEXP rel_diffSEXP, SEXP verboseSEXP, SEXP verbose2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type our_dim_1(our_dim_1SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TE_train(TE_trainSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TR_train(TR_trainSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type sigma_train(sigma_trainSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type train(trainSEXP);
    Rcpp::traits::input_parameter< double >::type train_scale(train_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type TE_scale(TE_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type TR_scale(TR_scaleSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type black_list(black_listSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type penalized(penalizedSEXP);
    Rcpp::traits::input_parameter< double >::type abs_diff(abs_diffSEXP);
    Rcpp::traits::input_parameter< double >::type rel_diff(rel_diffSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type verbose2(verbose2SEXP);
    rcpp_result_gen = Rcpp::wrap(AECM_R(W, our_dim_1, TE_train, TR_train, sigma_train, train, train_scale, TE_scale, TR_scale, black_list, maxiter, penalized, abs_diff, rel_diff, verbose, verbose2));
    return rcpp_result_gen;
END_RCPP
}
// OSL_R
Rcpp::List OSL_R(Eigen::MatrixXd W, Eigen::Map<Eigen::VectorXd> our_dim_1, const Eigen::Map<Eigen::VectorXd>& TE_train, const Eigen::Map<Eigen::VectorXd>& TR_train, const Eigen::Map<Eigen::VectorXd>& sigma_train, const Eigen::Map<Eigen::MatrixXd>& train, double train_scale, double TE_scale, double TR_scale, const Eigen::Map<Eigen::VectorXd>& black_list, int maxiter, int penalized, double abs_diff, double rel_diff, int verbose, int verbose2);
RcppExport SEXP _symR_OSL_R(SEXP WSEXP, SEXP our_dim_1SEXP, SEXP TE_trainSEXP, SEXP TR_trainSEXP, SEXP sigma_trainSEXP, SEXP trainSEXP, SEXP train_scaleSEXP, SEXP TE_scaleSEXP, SEXP TR_scaleSEXP, SEXP black_listSEXP, SEXP maxiterSEXP, SEXP penalizedSEXP, SEXP abs_diffSEXP, SEXP rel_diffSEXP, SEXP verboseSEXP, SEXP verbose2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type our_dim_1(our_dim_1SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TE_train(TE_trainSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TR_train(TR_trainSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type sigma_train(sigma_trainSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type train(trainSEXP);
    Rcpp::traits::input_parameter< double >::type train_scale(train_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type TE_scale(TE_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type TR_scale(TR_scaleSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type black_list(black_listSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type penalized(penalizedSEXP);
    Rcpp::traits::input_parameter< double >::type abs_diff(abs_diffSEXP);
    Rcpp::traits::input_parameter< double >::type rel_diff(rel_diffSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type verbose2(verbose2SEXP);
    rcpp_result_gen = Rcpp::wrap(OSL_R(W, our_dim_1, TE_train, TR_train, sigma_train, train, train_scale, TE_scale, TR_scale, black_list, maxiter, penalized, abs_diff, rel_diff, verbose, verbose2));
    return rcpp_result_gen;
END_RCPP
}
// Performance_test_R
Eigen::VectorXd Performance_test_R(const Eigen::Map<Eigen::MatrixXd>& W, const Eigen::Map<Eigen::MatrixXd>& test, const Eigen::Map<Eigen::VectorXd>& TE_test, const Eigen::Map<Eigen::VectorXd>& TR_test, const Eigen::Map<Eigen::VectorXd>& sigma_test, const Eigen::Map<Eigen::VectorXd>& black_list, int v_type, int measure_type, int scale, int verbose);
RcppExport SEXP _symR_Performance_test_R(SEXP WSEXP, SEXP testSEXP, SEXP TE_testSEXP, SEXP TR_testSEXP, SEXP sigma_testSEXP, SEXP black_listSEXP, SEXP v_typeSEXP, SEXP measure_typeSEXP, SEXP scaleSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type W(WSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type test(testSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TE_test(TE_testSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TR_test(TR_testSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type sigma_test(sigma_testSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type black_list(black_listSEXP);
    Rcpp::traits::input_parameter< int >::type v_type(v_typeSEXP);
    Rcpp::traits::input_parameter< int >::type measure_type(measure_typeSEXP);
    Rcpp::traits::input_parameter< int >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Performance_test_R(W, test, TE_test, TR_test, sigma_test, black_list, v_type, measure_type, scale, verbose));
    return rcpp_result_gen;
END_RCPP
}
// AECM_R_3D
Rcpp::List AECM_R_3D(Eigen::MatrixXd W, Eigen::Map<Eigen::VectorXd> our_dim_1, const Eigen::Map<Eigen::VectorXd>& TE_train, const Eigen::Map<Eigen::VectorXd>& TR_train, const Eigen::Map<Eigen::VectorXd>& sigma_train, const Eigen::Map<Eigen::MatrixXd>& train, double train_scale, double TE_scale, double TR_scale, const Eigen::Map<Eigen::VectorXd>& black_list, int maxiter, int penalized, double abs_diff, double rel_diff, int verbose, int verbose2);
RcppExport SEXP _symR_AECM_R_3D(SEXP WSEXP, SEXP our_dim_1SEXP, SEXP TE_trainSEXP, SEXP TR_trainSEXP, SEXP sigma_trainSEXP, SEXP trainSEXP, SEXP train_scaleSEXP, SEXP TE_scaleSEXP, SEXP TR_scaleSEXP, SEXP black_listSEXP, SEXP maxiterSEXP, SEXP penalizedSEXP, SEXP abs_diffSEXP, SEXP rel_diffSEXP, SEXP verboseSEXP, SEXP verbose2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type our_dim_1(our_dim_1SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TE_train(TE_trainSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TR_train(TR_trainSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type sigma_train(sigma_trainSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type train(trainSEXP);
    Rcpp::traits::input_parameter< double >::type train_scale(train_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type TE_scale(TE_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type TR_scale(TR_scaleSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type black_list(black_listSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type penalized(penalizedSEXP);
    Rcpp::traits::input_parameter< double >::type abs_diff(abs_diffSEXP);
    Rcpp::traits::input_parameter< double >::type rel_diff(rel_diffSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type verbose2(verbose2SEXP);
    rcpp_result_gen = Rcpp::wrap(AECM_R_3D(W, our_dim_1, TE_train, TR_train, sigma_train, train, train_scale, TE_scale, TR_scale, black_list, maxiter, penalized, abs_diff, rel_diff, verbose, verbose2));
    return rcpp_result_gen;
END_RCPP
}
// OSL_R_3D
Rcpp::List OSL_R_3D(Eigen::MatrixXd W, Eigen::Map<Eigen::VectorXd> our_dim_1, const Eigen::Map<Eigen::VectorXd>& TE_train, const Eigen::Map<Eigen::VectorXd>& TR_train, const Eigen::Map<Eigen::VectorXd>& sigma_train, const Eigen::Map<Eigen::MatrixXd>& train, double train_scale, double TE_scale, double TR_scale, const Eigen::Map<Eigen::VectorXd>& black_list, int maxiter, int penalized, double abs_diff, double rel_diff, int verbose, int verbose2);
RcppExport SEXP _symR_OSL_R_3D(SEXP WSEXP, SEXP our_dim_1SEXP, SEXP TE_trainSEXP, SEXP TR_trainSEXP, SEXP sigma_trainSEXP, SEXP trainSEXP, SEXP train_scaleSEXP, SEXP TE_scaleSEXP, SEXP TR_scaleSEXP, SEXP black_listSEXP, SEXP maxiterSEXP, SEXP penalizedSEXP, SEXP abs_diffSEXP, SEXP rel_diffSEXP, SEXP verboseSEXP, SEXP verbose2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type our_dim_1(our_dim_1SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TE_train(TE_trainSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type TR_train(TR_trainSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type sigma_train(sigma_trainSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type train(trainSEXP);
    Rcpp::traits::input_parameter< double >::type train_scale(train_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type TE_scale(TE_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type TR_scale(TR_scaleSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type black_list(black_listSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type penalized(penalizedSEXP);
    Rcpp::traits::input_parameter< double >::type abs_diff(abs_diffSEXP);
    Rcpp::traits::input_parameter< double >::type rel_diff(rel_diffSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type verbose2(verbose2SEXP);
    rcpp_result_gen = Rcpp::wrap(OSL_R_3D(W, our_dim_1, TE_train, TR_train, sigma_train, train, train_scale, TE_scale, TR_scale, black_list, maxiter, penalized, abs_diff, rel_diff, verbose, verbose2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_symR_mean_rice_R", (DL_FUNC) &_symR_mean_rice_R, 2},
    {"_symR_J", (DL_FUNC) &_symR_J, 1},
    {"_symR_eigenvals_J", (DL_FUNC) &_symR_eigenvals_J, 1},
    {"_symR_Bloch_eqn_R", (DL_FUNC) &_symR_Bloch_eqn_R, 3},
    {"_symR_v_mat_R", (DL_FUNC) &_symR_v_mat_R, 3},
    {"_symR_Generate_r", (DL_FUNC) &_symR_Generate_r, 4},
    {"_symR_dee_v_ij_dee_W_ik", (DL_FUNC) &_symR_dee_v_ij_dee_W_ik, 5},
    {"_symR_dee_2_v_ij_dee_W_ik_dee_W_ik1", (DL_FUNC) &_symR_dee_2_v_ij_dee_W_ik_dee_W_ik1, 6},
    {"_symR_Init_val_least_sq_R", (DL_FUNC) &_symR_Init_val_least_sq_R, 9},
    {"_symR_AECM_R", (DL_FUNC) &_symR_AECM_R, 16},
    {"_symR_OSL_R", (DL_FUNC) &_symR_OSL_R, 16},
    {"_symR_Performance_test_R", (DL_FUNC) &_symR_Performance_test_R, 10},
    {"_symR_AECM_R_3D", (DL_FUNC) &_symR_AECM_R_3D, 16},
    {"_symR_OSL_R_3D", (DL_FUNC) &_symR_OSL_R_3D, 16},
    {NULL, NULL, 0}
};

RcppExport void R_init_symR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
