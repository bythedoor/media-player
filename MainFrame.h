#pragma once
#include "wx/event.h"
#include <wx/wx.h>

class MainFrame : public wxFrame 
{
    public:
        MainFrame(const wxString& title);
    private:
        void OnPlayButtonClicked(wxCommandEvent& event);
        void OnPauseButtonClicked(wxCommandEvent& event);
        wxDECLARE_EVENT_TABLE();
};