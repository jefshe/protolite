// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// cpp_serialize_geobuf
RawVector cpp_serialize_geobuf(List x, int decimals);
static SEXP _protolite_cpp_serialize_geobuf_try(SEXP xSEXP, SEXP decimalsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type decimals(decimalsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_serialize_geobuf(x, decimals));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _protolite_cpp_serialize_geobuf(SEXP xSEXP, SEXP decimalsSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_protolite_cpp_serialize_geobuf_try(xSEXP, decimalsSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// R_start_protobuf
void R_start_protobuf();
RcppExport SEXP _protolite_R_start_protobuf() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    R_start_protobuf();
    return R_NilValue;
END_RCPP
}
// cpp_serialize_pb
Rcpp::RawVector cpp_serialize_pb(Rcpp::RObject x, bool skip_native);
static SEXP _protolite_cpp_serialize_pb_try(SEXP xSEXP, SEXP skip_nativeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type skip_native(skip_nativeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_serialize_pb(x, skip_native));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _protolite_cpp_serialize_pb(SEXP xSEXP, SEXP skip_nativeSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_protolite_cpp_serialize_pb_try(xSEXP, skip_nativeSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// cpp_unserialize_geobuf
List cpp_unserialize_geobuf(Rcpp::RawVector x);
static SEXP _protolite_cpp_unserialize_geobuf_try(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RawVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_unserialize_geobuf(x));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _protolite_cpp_unserialize_geobuf(SEXP xSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_protolite_cpp_unserialize_geobuf_try(xSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// cpp_unserialize_pb
Rcpp::RObject cpp_unserialize_pb(Rcpp::RawVector x);
static SEXP _protolite_cpp_unserialize_pb_try(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RawVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_unserialize_pb(x));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _protolite_cpp_unserialize_pb(SEXP xSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_protolite_cpp_unserialize_pb_try(xSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _protolite_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("RawVector(*cpp_serialize_geobuf)(List,int)");
        signatures.insert("Rcpp::RawVector(*cpp_serialize_pb)(Rcpp::RObject,bool)");
        signatures.insert("List(*cpp_unserialize_geobuf)(Rcpp::RawVector)");
        signatures.insert("Rcpp::RObject(*cpp_unserialize_pb)(Rcpp::RawVector)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _protolite_RcppExport_registerCCallable() { 
    R_RegisterCCallable("protolite", "_protolite_cpp_serialize_geobuf", (DL_FUNC)_protolite_cpp_serialize_geobuf_try);
    R_RegisterCCallable("protolite", "_protolite_cpp_serialize_pb", (DL_FUNC)_protolite_cpp_serialize_pb_try);
    R_RegisterCCallable("protolite", "_protolite_cpp_unserialize_geobuf", (DL_FUNC)_protolite_cpp_unserialize_geobuf_try);
    R_RegisterCCallable("protolite", "_protolite_cpp_unserialize_pb", (DL_FUNC)_protolite_cpp_unserialize_pb_try);
    R_RegisterCCallable("protolite", "_protolite_RcppExport_validate", (DL_FUNC)_protolite_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_protolite_cpp_serialize_geobuf", (DL_FUNC) &_protolite_cpp_serialize_geobuf, 2},
    {"_protolite_R_start_protobuf", (DL_FUNC) &_protolite_R_start_protobuf, 0},
    {"_protolite_cpp_serialize_pb", (DL_FUNC) &_protolite_cpp_serialize_pb, 2},
    {"_protolite_cpp_unserialize_geobuf", (DL_FUNC) &_protolite_cpp_unserialize_geobuf, 1},
    {"_protolite_cpp_unserialize_pb", (DL_FUNC) &_protolite_cpp_unserialize_pb, 1},
    {"_protolite_RcppExport_registerCCallable", (DL_FUNC) &_protolite_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_protolite(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
