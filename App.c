#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(App);

bool App::OnINit() {
    MainFrame* mainFrame = new MainFrame("cute media player");
    mainFrame->Show();
    return true;
}