/*
  ==============================================================================

    Tempo.h
    Created: 13 Sep 2025 3:21:46pm
    Author:  Jacob Bunnell

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class Tempo
{
    public:
        void reset() noexcept;
        
        void update(const juce::AudioPlayHead* playHead) noexcept;
        
        double getMillisecondsForNoteLength(int index) const noexcept;
        
        double getTempo() const noexcept
        {
            return bpm;
        }
    
    private:
        double bpm = 120.0;
};
