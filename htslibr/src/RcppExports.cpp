// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// htslib_version
void htslib_version();
RcppExport SEXP _htslibr_htslib_version() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    htslib_version();
    return R_NilValue;
END_RCPP
}
// check_format
std::string check_format(std::string fname);
RcppExport SEXP _htslibr_check_format(SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    rcpp_result_gen = Rcpp::wrap(check_format(fname));
    return rcpp_result_gen;
END_RCPP
}
// extract_sequence
CharacterVector extract_sequence(std::string bam, std::string index, std::string reg);
RcppExport SEXP _htslibr_extract_sequence(SEXP bamSEXP, SEXP indexSEXP, SEXP regSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type bam(bamSEXP);
    Rcpp::traits::input_parameter< std::string >::type index(indexSEXP);
    Rcpp::traits::input_parameter< std::string >::type reg(regSEXP);
    rcpp_result_gen = Rcpp::wrap(extract_sequence(bam, index, reg));
    return rcpp_result_gen;
END_RCPP
}
// count_kmer
DataFrame count_kmer(std::string bam, std::string index, const std::string& reg, const std::string& kmer);
RcppExport SEXP _htslibr_count_kmer(SEXP bamSEXP, SEXP indexSEXP, SEXP regSEXP, SEXP kmerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type bam(bamSEXP);
    Rcpp::traits::input_parameter< std::string >::type index(indexSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type reg(regSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type kmer(kmerSEXP);
    rcpp_result_gen = Rcpp::wrap(count_kmer(bam, index, reg, kmer));
    return rcpp_result_gen;
END_RCPP
}
// gc_content
DataFrame gc_content(std::string bam, std::string index, const std::string& reg);
RcppExport SEXP _htslibr_gc_content(SEXP bamSEXP, SEXP indexSEXP, SEXP regSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type bam(bamSEXP);
    Rcpp::traits::input_parameter< std::string >::type index(indexSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type reg(regSEXP);
    rcpp_result_gen = Rcpp::wrap(gc_content(bam, index, reg));
    return rcpp_result_gen;
END_RCPP
}
// depth
DataFrame depth(std::string bam, std::string index, const std::string& reg);
RcppExport SEXP _htslibr_depth(SEXP bamSEXP, SEXP indexSEXP, SEXP regSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type bam(bamSEXP);
    Rcpp::traits::input_parameter< std::string >::type index(indexSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type reg(regSEXP);
    rcpp_result_gen = Rcpp::wrap(depth(bam, index, reg));
    return rcpp_result_gen;
END_RCPP
}
// extract_info
DataFrame extract_info(std::string vcf, std::string index, std::string& reg, std::string& tag);
RcppExport SEXP _htslibr_extract_info(SEXP vcfSEXP, SEXP indexSEXP, SEXP regSEXP, SEXP tagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcf(vcfSEXP);
    Rcpp::traits::input_parameter< std::string >::type index(indexSEXP);
    Rcpp::traits::input_parameter< std::string& >::type reg(regSEXP);
    Rcpp::traits::input_parameter< std::string& >::type tag(tagSEXP);
    rcpp_result_gen = Rcpp::wrap(extract_info(vcf, index, reg, tag));
    return rcpp_result_gen;
END_RCPP
}
// extract_genotypes
SEXP extract_genotypes(std::string vcf, std::string index, std::string& reg);
RcppExport SEXP _htslibr_extract_genotypes(SEXP vcfSEXP, SEXP indexSEXP, SEXP regSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcf(vcfSEXP);
    Rcpp::traits::input_parameter< std::string >::type index(indexSEXP);
    Rcpp::traits::input_parameter< std::string& >::type reg(regSEXP);
    rcpp_result_gen = Rcpp::wrap(extract_genotypes(vcf, index, reg));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_htslibr_htslib_version", (DL_FUNC) &_htslibr_htslib_version, 0},
    {"_htslibr_check_format", (DL_FUNC) &_htslibr_check_format, 1},
    {"_htslibr_extract_sequence", (DL_FUNC) &_htslibr_extract_sequence, 3},
    {"_htslibr_count_kmer", (DL_FUNC) &_htslibr_count_kmer, 4},
    {"_htslibr_gc_content", (DL_FUNC) &_htslibr_gc_content, 3},
    {"_htslibr_depth", (DL_FUNC) &_htslibr_depth, 3},
    {"_htslibr_extract_info", (DL_FUNC) &_htslibr_extract_info, 4},
    {"_htslibr_extract_genotypes", (DL_FUNC) &_htslibr_extract_genotypes, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_htslibr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
