/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"


//==============================================================================
class JuceS2TextApplication  : public JUCEApplication
{
public:
    //==============================================================================
    JuceS2TextApplication()
    {
    }

    ~JuceS2TextApplication()
    {
    }

    //==============================================================================
    void initialise (const String& commandLine)
    {
        // Do your application's initialisation code here..
        
    }

    void shutdown()
    {
        // Do your application's shutdown code here..
        
    }

    //==============================================================================
    void systemRequestedQuit()
    {
        quit();
    }

    //==============================================================================
    const String getApplicationName()
    {
        return "JuceS2Text";
    }

    const String getApplicationVersion()
    {
        return ProjectInfo::versionString;
    }

    bool moreThanOneInstanceAllowed()
    {
        return true;
    }

    void anotherInstanceStarted (const String& commandLine)
    {
        
    }

private:
    
};

//==============================================================================
// This macro generates the main() routine that starts the app.
START_JUCE_APPLICATION(JuceS2TextApplication)
