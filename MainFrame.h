#pragma once
#include "wx/event.h"
#include <wx/mediactrl.h>
#include <wx/wx.h>
using namespace std;

class MainFrame : public wxFrame 
{
    public:
        MainFrame(const wxString& title);
        wxMediaCtrl* currMusic; // the music who will be played
        wxSlider* volumeSlider; // slider for controlling the volume of the music played
        string musicFilePath;
    private:
        void OnPlayButtonClicked(wxCommandEvent& event);
        void OnPauseButtonClicked(wxCommandEvent& event);
        void OnFileButtonClicked(wxCommandEvent& event);
        void VolumeSliderControl(wxCommandEvent& event);
        wxDECLARE_EVENT_TABLE();
};