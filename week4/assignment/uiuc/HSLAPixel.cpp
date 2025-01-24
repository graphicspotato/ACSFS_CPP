/**
 * @file HSLAPixel.cpp
 * Implementation of the HSLAPixel class for use in with the PNG library.
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#include <cmath>
#include <iostream>
#include "HSLAPixel.h"
using namespace std;

namespace uiuc {
	double HSLAPixel::ConstrainTo360(double input)
	{
		if (input > 360.0)
		{
			input = 360;
		}
		else if (input < 0)
		{
			input = 0;
		}
		return h = input;
	}

	double HSLAPixel::ConstrainTo1(double input)
	{
		if (input > 1.0)
		{
			input = 1;
		}
		else if (input < 0)
		{
			input = 0;
		}
		return l = input;
	}
}
