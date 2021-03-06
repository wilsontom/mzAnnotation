// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// HR2
std::vector<std::vector<std::string> > HR2(double measured_mass, std::vector<int> max, std::vector<int> min, double tolerance, double charge, bool applygr);
RcppExport SEXP _mzAnnotation_HR2(SEXP measured_massSEXP, SEXP maxSEXP, SEXP minSEXP, SEXP toleranceSEXP, SEXP chargeSEXP, SEXP applygrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type measured_mass(measured_massSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type max(maxSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< double >::type charge(chargeSEXP);
    Rcpp::traits::input_parameter< bool >::type applygr(applygrSEXP);
    rcpp_result_gen = Rcpp::wrap(HR2(measured_mass, max, min, tolerance, charge, applygr));
    return rcpp_result_gen;
END_RCPP
}
// convert
std::string convert(std::string input, const char* inputType, const char* outputType);
RcppExport SEXP _mzAnnotation_convert(SEXP inputSEXP, SEXP inputTypeSEXP, SEXP outputTypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type input(inputSEXP);
    Rcpp::traits::input_parameter< const char* >::type inputType(inputTypeSEXP);
    Rcpp::traits::input_parameter< const char* >::type outputType(outputTypeSEXP);
    rcpp_result_gen = Rcpp::wrap(convert(input, inputType, outputType));
    return rcpp_result_gen;
END_RCPP
}
// smileToMF
std::string smileToMF(std::string smile);
RcppExport SEXP _mzAnnotation_smileToMF(SEXP smileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type smile(smileSEXP);
    rcpp_result_gen = Rcpp::wrap(smileToMF(smile));
    return rcpp_result_gen;
END_RCPP
}
// smileToAccurateMass
double smileToAccurateMass(std::string smile);
RcppExport SEXP _mzAnnotation_smileToAccurateMass(SEXP smileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type smile(smileSEXP);
    rcpp_result_gen = Rcpp::wrap(smileToAccurateMass(smile));
    return rcpp_result_gen;
END_RCPP
}
// smartsSearch
int smartsSearch(std::string smile, std::string smart);
RcppExport SEXP _mzAnnotation_smartsSearch(SEXP smileSEXP, SEXP smartSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type smile(smileSEXP);
    Rcpp::traits::input_parameter< std::string >::type smart(smartSEXP);
    rcpp_result_gen = Rcpp::wrap(smartsSearch(smile, smart));
    return rcpp_result_gen;
END_RCPP
}
// descriptor
double descriptor(std::string smile, const char* desc);
RcppExport SEXP _mzAnnotation_descriptor(SEXP smileSEXP, SEXP descSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type smile(smileSEXP);
    Rcpp::traits::input_parameter< const char* >::type desc(descSEXP);
    rcpp_result_gen = Rcpp::wrap(descriptor(smile, desc));
    return rcpp_result_gen;
END_RCPP
}
// ppmRange
List ppmRange(double mz, double ppm);
RcppExport SEXP _mzAnnotation_ppmRange(SEXP mzSEXP, SEXP ppmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type mz(mzSEXP);
    Rcpp::traits::input_parameter< double >::type ppm(ppmSEXP);
    rcpp_result_gen = Rcpp::wrap(ppmRange(mz, ppm));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mzAnnotation_HR2", (DL_FUNC) &_mzAnnotation_HR2, 6},
    {"_mzAnnotation_convert", (DL_FUNC) &_mzAnnotation_convert, 3},
    {"_mzAnnotation_smileToMF", (DL_FUNC) &_mzAnnotation_smileToMF, 1},
    {"_mzAnnotation_smileToAccurateMass", (DL_FUNC) &_mzAnnotation_smileToAccurateMass, 1},
    {"_mzAnnotation_smartsSearch", (DL_FUNC) &_mzAnnotation_smartsSearch, 2},
    {"_mzAnnotation_descriptor", (DL_FUNC) &_mzAnnotation_descriptor, 2},
    {"_mzAnnotation_ppmRange", (DL_FUNC) &_mzAnnotation_ppmRange, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_mzAnnotation(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
