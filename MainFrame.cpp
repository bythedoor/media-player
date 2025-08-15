#include "MainFrame.h"
#include "wx/gdicmn.h"
#include "wx/gtk/button.h"
#include "wx/gtk/stattext.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title, wxDefaultPosition, wxSize(800,600)) 
{
    wxPanel* panel = new wxPanel(this); // creating panel for buttons and text

    //text for displaying the music
    wxStaticText* songText = new wxStaticText(panel, wxID_ANY, "nct wish - steady", wxPoint(335, 30));

    //buttons for controlling the music
    wxButton* playButton = new wxButton(panel, wxID_ANY, "play !", wxPoint(275, 500), wxSize(100, 35));
    wxButton* pauseButton = new wxButton(panel, wxID_ANY, "pause...", wxPoint(425, 500), wxSize(100, 35));

    wxButton* previousButton = new wxButton(panel, wxID_ANY, "previous", wxPoint(150, 500), wxSize(100, 35));
    wxButton* nextButton = new wxButton(panel, wxID_ANY, "next", wxPoint(550, 500), wxSize(100, 35));
}