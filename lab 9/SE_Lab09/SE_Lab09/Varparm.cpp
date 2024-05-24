#include <iostream>
#include "Varparm.h"

namespace Varparm
{
	int ivarparm(int a, ...) 
	{
		int result = 1;
		va_list args;
		va_start(args, a);
		for (int i = 0; i < a; ++i) {
			result *= va_arg(args, int);
		}
		va_end(args);
		return result;
	}

	int svarparm(short a, ...)
	{
		int max = 0;
		va_list args;
		va_start(args, a);
		for (int i = 0; i < a; i++) {
			int value = va_arg(args, int);
			if (value > max) {
				max = value;
			}
		}
		va_end(args);
		return max;
	}

	double fvarparm(float a, ...)
	{
		double sum = 0;
		va_list args;
		va_start(args, a);
		float val = a;
		while (val != FLT_MAX) {
			sum += val;
			val = va_arg(args, double);
		}
		va_end(args);
		return sum;
	}

	double dvarparm(double a, ...)
	{
		double sum = 0;
		va_list args;
		va_start(args, a);
		double val = a;
		while (val != DBL_MAX) {
			sum += val;
			val = va_arg(args, double);
		}
		va_end(args);
		return sum;
	}  
}