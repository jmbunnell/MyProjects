/*
  ==============================================================================

    DSP.h
    Created: 1 Sep 2025 1:10:20pm
    Author:  Jacob Bunnell

  ==============================================================================
*/

#pragma once

#include <cmath>

inline void panningEqualPower(float panning, float& left, float& right)
{
    float x = 0.7853981633974483f * (panning + 1.0f);
    left = std::cos(x);
    right = std::sin(x);
}
