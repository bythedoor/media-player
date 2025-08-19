#include "MainFrame.h"
#include "wx/chartype.h"
#include "wx/event.h"
#include "wx/gtk/frame.h"
#include "wx/log.h"
#include <wx/mediactrl.h>
#include <wx/wx.h>


enum IDs //setting different IDs for each button
{    
    PLAY_BUTTON_ID = 2,
    PAUSE_BUTTON_ID = 3
};

wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
    EVT_BUTTON(PLAY_BUTTON_ID, MainFrame::OnPlayButtonClicked)
    EVT_BUTTON(PAUSE_BUTTON_ID, MainFrame::OnPauseButtonClicked)
wxEND_EVENT_TABLE()


MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title, wxDefaultPosition, wxSize(800,600)) 
{
    wxPanel* panel = new wxPanel(this); // creating panel for buttons and text

    //text for displaying the music info
    wxStaticText* songText = new wxStaticText(panel, wxID_ANY, "nct wish - steady", wxPoint(335, 30));

    //buttons for controlling the music
    wxButton* playButton = new wxButton(panel, PLAY_BUTTON_ID, "play !", wxPoint(275, 500), wxSize(100, 35));
    wxButton* pauseButton = new wxButton(panel, PAUSE_BUTTON_ID, "pause...", wxPoint(425, 500), wxSize(100, 35));

    wxButton* previousButton = new wxButton(panel, wxID_ANY, "previous", wxPoint(150, 500), wxSize(100, 35));
    wxButton* nextButton = new wxButton(panel, wxID_ANY, "next", wxPoint(550, 500), wxSize(100, 35));
    
}

void MainFrame::OnPlayButtonClicked(wxCommandEvent& event)
{
    // current music playing
    wxMediaCtrl* currMusic = new wxMediaCtrl(this, wxID_ANY);
    if (!currMusic->Load(wxT("nct-wish-steady.mp3"))) {
        wxLogError("failed to load MP3 file :(");
    }
    else {
        currMusic->Play();
    }
}

void MainFrame::OnPauseButtonClicked(wxCommandEvent& event) 
{
    wxMediaCtrl* currMusic = new wxMediaCtrl(this, wxID_ANY);
    if (!currMusic->Load(wxT("nct-wish-steady.mp3"))) {
        wxLogError("failed to load MP3 file :(");
    }
    else {
        currMusic->Stop();
    }
}