# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

cpp_serialize_geobuf <- function(x, decimals) {
    .Call('_protolite_cpp_serialize_geobuf', PACKAGE = 'protolite', x, decimals)
}

R_start_protobuf <- function() {
    invisible(.Call('_protolite_R_start_protobuf', PACKAGE = 'protolite'))
}

cpp_serialize_pb <- function(x, skip_native) {
    .Call('_protolite_cpp_serialize_pb', PACKAGE = 'protolite', x, skip_native)
}

cpp_unserialize_geobuf <- function(x) {
    .Call('_protolite_cpp_unserialize_geobuf', PACKAGE = 'protolite', x)
}

cpp_unserialize_pb <- function(x) {
    .Call('_protolite_cpp_unserialize_pb', PACKAGE = 'protolite', x)
}

# Register entry points for exported C++ functions
methods::setLoadAction(function(ns) {
    .Call('_protolite_RcppExport_registerCCallable', PACKAGE = 'protolite')
})
