// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fststore
SEXP fststore(Rcpp::String fileName, SEXP table, SEXP compression, SEXP uniformEncoding);
RcppExport SEXP _fst_fststore(SEXP fileNameSEXP, SEXP tableSEXP, SEXP compressionSEXP, SEXP uniformEncodingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type table(tableSEXP);
    Rcpp::traits::input_parameter< SEXP >::type compression(compressionSEXP);
    Rcpp::traits::input_parameter< SEXP >::type uniformEncoding(uniformEncodingSEXP);
    rcpp_result_gen = Rcpp::wrap(fststore(fileName, table, compression, uniformEncoding));
    return rcpp_result_gen;
END_RCPP
}
// fstmetadata
SEXP fstmetadata(Rcpp::String fileName, SEXP oldFormat);
RcppExport SEXP _fst_fstmetadata(SEXP fileNameSEXP, SEXP oldFormatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type oldFormat(oldFormatSEXP);
    rcpp_result_gen = Rcpp::wrap(fstmetadata(fileName, oldFormat));
    return rcpp_result_gen;
END_RCPP
}
// fstretrieve
SEXP fstretrieve(Rcpp::String fileName, SEXP columnSelection, SEXP startRow, SEXP endRow, SEXP oldFormat);
RcppExport SEXP _fst_fstretrieve(SEXP fileNameSEXP, SEXP columnSelectionSEXP, SEXP startRowSEXP, SEXP endRowSEXP, SEXP oldFormatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type columnSelection(columnSelectionSEXP);
    Rcpp::traits::input_parameter< SEXP >::type startRow(startRowSEXP);
    Rcpp::traits::input_parameter< SEXP >::type endRow(endRowSEXP);
    Rcpp::traits::input_parameter< SEXP >::type oldFormat(oldFormatSEXP);
    rcpp_result_gen = Rcpp::wrap(fstretrieve(fileName, columnSelection, startRow, endRow, oldFormat));
    return rcpp_result_gen;
END_RCPP
}
// fsthasher
SEXP fsthasher(SEXP rawVec, SEXP seed, SEXP blockHash);
RcppExport SEXP _fst_fsthasher(SEXP rawVecSEXP, SEXP seedSEXP, SEXP blockHashSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type rawVec(rawVecSEXP);
    Rcpp::traits::input_parameter< SEXP >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< SEXP >::type blockHash(blockHashSEXP);
    rcpp_result_gen = Rcpp::wrap(fsthasher(rawVec, seed, blockHash));
    return rcpp_result_gen;
END_RCPP
}
// fstcomp
SEXP fstcomp(SEXP rawVec, SEXP compressor, SEXP compression, SEXP hash);
RcppExport SEXP _fst_fstcomp(SEXP rawVecSEXP, SEXP compressorSEXP, SEXP compressionSEXP, SEXP hashSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type rawVec(rawVecSEXP);
    Rcpp::traits::input_parameter< SEXP >::type compressor(compressorSEXP);
    Rcpp::traits::input_parameter< SEXP >::type compression(compressionSEXP);
    Rcpp::traits::input_parameter< SEXP >::type hash(hashSEXP);
    rcpp_result_gen = Rcpp::wrap(fstcomp(rawVec, compressor, compression, hash));
    return rcpp_result_gen;
END_RCPP
}
// fstdecomp
SEXP fstdecomp(SEXP rawVec);
RcppExport SEXP _fst_fstdecomp(SEXP rawVecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type rawVec(rawVecSEXP);
    rcpp_result_gen = Rcpp::wrap(fstdecomp(rawVec));
    return rcpp_result_gen;
END_RCPP
}
// getnrofthreads
SEXP getnrofthreads();
RcppExport SEXP _fst_getnrofthreads() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(getnrofthreads());
    return rcpp_result_gen;
END_RCPP
}
// setnrofthreads
int setnrofthreads(SEXP nrOfThreads);
RcppExport SEXP _fst_setnrofthreads(SEXP nrOfThreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type nrOfThreads(nrOfThreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(setnrofthreads(nrOfThreads));
    return rcpp_result_gen;
END_RCPP
}
// hasopenmp
SEXP hasopenmp();
RcppExport SEXP _fst_hasopenmp() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(hasopenmp());
    return rcpp_result_gen;
END_RCPP
}
// restore_after_fork
void restore_after_fork(bool restore);
RcppExport SEXP _fst_restore_after_fork(SEXP restoreSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type restore(restoreSEXP);
    restore_after_fork(restore);
    return R_NilValue;
END_RCPP
}
