#include <wx/wx.h>
#include "MyApp.h"
#include "MainFrame.h"

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit() {
    MainFrame* myFrame = new MainFrame("media player </3");
    myFrame->Show();
    return true;
};


