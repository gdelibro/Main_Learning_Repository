/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class My_first_pluginAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    My_first_pluginAudioProcessorEditor (My_first_pluginAudioProcessor&);
    ~My_first_pluginAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    My_first_pluginAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (My_first_pluginAudioProcessorEditor)
};
