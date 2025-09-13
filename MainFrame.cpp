#include "MainFrame.h"
#include "wx/chartype.h"
#include "wx/event.h"
#include "wx/gtk/filedlg.h"
#include "wx/gtk/frame.h"
#include "wx/log.h"
#include <wx/mediactrl.h>
#include <wx/wx.h>


enum IDs //setting different IDs for each button
{    
    PLAY_BUTTON_ID = 2,
    PAUSE_BUTTON_ID = 3,
    FILE_BUTTON_ID = 4
};

wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
    EVT_BUTTON(PLAY_BUTTON_ID, MainFrame::OnPlayButtonClicked)
    EVT_BUTTON(PAUSE_BUTTON_ID, MainFrame::OnPauseButtonClicked)
    EVT_BUTTON(FILE_BUTTON_ID, MainFrame::OnFileButtonClicked)
wxEND_EVENT_TABLE()


MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title, wxDefaultPosition, wxSize(800,600)) 
{
    // creating panel for the controls
    wxPanel* panel = new wxPanel(this);

    // text for displaying the music info
    wxStaticText* songText = new wxStaticText(panel, wxID_ANY, "nct wish - steady", wxPoint(335, 30));

    // button for obening the file
    wxButton* fileButton = new wxButton(panel, FILE_BUTTON_ID, "choose your music !", wxPoint(335, 60), wxSize(170, 35));

    // buttons for controlling the music
    wxButton* playButton = new wxButton(panel, PLAY_BUTTON_ID, "play !", wxPoint(275, 500), wxSize(100, 35));
    wxButton* pauseButton = new wxButton(panel, PAUSE_BUTTON_ID, "pause...", wxPoint(425, 500), wxSize(100, 35));

    wxButton* previousButton = new wxButton(panel, wxID_ANY, "previous", wxPoint(150, 500), wxSize(100, 35));
    wxButton* nextButton = new wxButton(panel, wxID_ANY, "next", wxPoint(550, 500), wxSize(100, 35));

    // intialising the musing playing
    currMusic = new wxMediaCtrl(panel, wxID_ANY);

    // file dialogue for the file button
    wxFileDialog* fileDialog = new wxFileDialog(panel, "choose your file ?");
    
}


/* When the user clicks on the play button, 
the app plays the current music file chosen */

void MainFrame::OnPlayButtonClicked(wxCommandEvent& event)
{
    // displays an error message if the file is not found
    if (!currMusic->Load(wxT("nct-wish-steady.mp3"))) {
        wxLogError("failed to load MP3 file :(");
    }
    else {
        currMusic->Play();
    }
}


/* When the user clicks on the pause button, 
the app stops the music currently playing */

void MainFrame::OnPauseButtonClicked(wxCommandEvent& event) 
{

    currMusic->Stop();
}

void MainFrame::OnFileButtonClicked(wxCommandEvent& event) {
    
}