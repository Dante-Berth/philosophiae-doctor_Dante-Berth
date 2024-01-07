import time
from pybind11.setup_helpers import Pybind11Extension, build_ext
from setuptools import setup
import pybind_11_example as pbe

def harmonic_sum(power):
    harmonic_sum = 1
    for i in range(2,pow(10,power)+1):
        harmonic_sum += 1/i
    return harmonic_sum
power = 9

begin_time = time.time()
harmonic_sum = harmonic_sum(9)
end_time = time.time()
print('Python\n')
print("Time Process  " + str(round(end_time - begin_time, 3)) + "s")
print(f"Harmonic sum {harmonic_sum} for n equals to {power}")

begin_time = time.time()
harmonic_sum = pbe.harmonic_sum_cpp(9)
print("Time Process  " + str(round(end_time - begin_time, 3)) + "s")
print(f"Harmonic sum {harmonic_sum} for n equals to {power}")
end_time = time.time()