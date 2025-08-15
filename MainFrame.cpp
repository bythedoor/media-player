#include "MainFrame.h"
#include "wx/gdicmn.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title, wxDefaultPosition, wxSize(800,600)) 
{
    wxPanel* panel = new wxPanel(this); // creating panel for buttons and text
    wxButton* playButton = new wxButton(panel, wxID_ANY, "play !", wxPoint(250, 500), wxSize(100, 35));
    wxButton* pauseButton = new wxButton(panel, wxID_ANY, "pause...", wxPoint(450, 500), wxSize(100, 35));
}