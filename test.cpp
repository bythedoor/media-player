#include <wx/wx.h>

class MyApp : public wxApp {
public:
    bool OnInit() override {
        wxFrame* frame = new wxFrame(nullptr, wxID_ANY, "Test", wxDefaultPosition, wxSize(400, 300));
        wxPanel* panel = new wxPanel(frame, wxID_ANY);
        new wxButton(panel, wxID_ANY, "Play!", wxPoint(20, 20), wxSize(100, 35));
        new wxButton(panel, wxID_ANY, "Pause...", wxPoint(20, 70), wxSize(100, 35));
        frame->Show();
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);
