from pathlib import Path

from pybind11.setup_helpers import Pybind11Extension, build_ext
from setuptools import setup

example_module = Pybind11Extension(
    'pybind_11_example',
    [str(fname) for fname in Path('src').glob('*.cpp')],
    include_dirs=['include'],
    extra_compile_args=['-O3']
)

setup(
    name='pybind_11_example',
    version=0.1,
    author='Dante-Berht',
    author_email='None',
    description='1st try to bind Python and C++',
    ext_modules=[example_module],
    cmdclass={"build_ext": build_ext},
)