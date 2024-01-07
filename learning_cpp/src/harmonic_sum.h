#include <pybind11/pybind11.h>
namespace py = pybind11;

double fct_harmonic_sum(const int power, double harmonic = 0.0); // it is called signature harmonic_sum

PYBIND11_MODULE(pybind_11_example, mod) {
    mod.def("harmonic_sum_cpp", &fct_harmonic_sum, "Harmonic sum algorithm.");
}