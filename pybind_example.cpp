#include <optional>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>


namespace py = pybind11;


// testing the C++17 optional functionality from cppreference.com
std::optional<std::string> create(bool b) {
    if (b)
        return "Godzilla";
    return {};
}


PYBIND11_MODULE(_pybindexample, m) {
    m.def("create", create);
}
