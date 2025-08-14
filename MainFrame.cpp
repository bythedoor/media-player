#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title)
{
    wxPanel* panel = new wxPanel(this); // creating panel for buttons and text
    wxButton* playButton = new wxButton(this, wxID_ANY, "play !", wxPoint(150, 50), wxSize(100, 35));
    wxButton* pauseButton = new wxButton(this, wxID_ANY, "pause...", wxPoint(150, 90), wxSize(100, 35));
}