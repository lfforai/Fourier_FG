#pragma once
//#include <Python.h>
#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include <stdio.h>
#include <helper_cuda.h>
#include <helper_string.h>
#include <helper_functions.h>
#include <iostream>
#include <string>
#include <curand.h>

using namespace std;
extern "C"  void plot_cos_sin();