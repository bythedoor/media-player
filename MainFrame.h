#pragma once
#include "wx/event.h"
#include <wx/mediactrl.h>
#include <wx/wx.h>

class MainFrame : public wxFrame 
{
    public:
        MainFrame(const wxString& title);
        wxMediaCtrl* currMusic; // the music who will be played
    private:
        void OnPlayButtonClicked(wxCommandEvent& event);
        void OnPauseButtonClicked(wxCommandEvent& event);
        wxDECLARE_EVENT_TABLE();
};