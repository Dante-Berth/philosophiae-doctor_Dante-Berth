#include <pybind11/pybind11.h>

namespace py = pybind11;

double fct_harmonic_sum(int power);

PYBIND11_MODULE(pybind_11_example, mod) {
    mod.def("harmonic_sum_cpp", &fct_harmonic_sum, "Harmonic sum algorithm.");
}