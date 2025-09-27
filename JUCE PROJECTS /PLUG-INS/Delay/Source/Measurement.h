/*
  ==============================================================================

    Measurement.h
    Created: 27 Sep 2025 3:27:07pm
    Author:  Jacob Bunnell

  ==============================================================================
*/

#pragma once

#include <atomic>

struct Measurement
{
    void reset() noexcept
    {
        value.store(0.0f);
    }
    
    void updateIfGreater(float newValue) noexcept
    {
        auto oldValue = value.load();
        while (newValue > oldValue && !value.compare_exchange_weak(oldValue, newValue));
    }
    
    float readAndReset() noexcept
    {
        return value.exchange(0.0f);
    }
    
    std::atomic<float> value;
};
