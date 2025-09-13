/*
  ==============================================================================

    Tempo.cpp
    Created: 13 Sep 2025 3:21:46pm
    Author:  Jacob Bunnell

  ==============================================================================
*/

#include "Tempo.h"

void Tempo::reset() noexcept
{
    bpm = 120.0;
}

void Tempo::update(const juce::AudioPlayHead* playhead) noexcept
{
    reset();
    
    if (playhead == nullptr) { return; }
    
    const auto opt = playhead->getPosition();
    
    if(!opt.hasValue()) { return; }
    
    const auto& pos = *opt;
    
    if (pos.getBpm().hasValue()) {
        bpm = *pos.getBpm();
    }
}
