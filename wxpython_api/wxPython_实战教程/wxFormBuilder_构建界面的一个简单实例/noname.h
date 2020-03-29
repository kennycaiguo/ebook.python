///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/textctrl.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
	private:

	protected:
		wxStaticText* YouDaoHelper;
		wxButton* sea_button;
		wxButton* add_button;

		// Virtual event handlers, overide them in your derived class
		virtual void search( wxCommandEvent& event ) { event.Skip(); }
		virtual void add( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame1();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame2
///////////////////////////////////////////////////////////////////////////////
class MyFrame2 : public wxFrame
{
	private:

	protected:
		wxTextCtrl* sea_word;
		wxButton* sea_button;
		wxStaticText* text;
		wxStaticText* fanyi;
		wxButton* rt;

		// Virtual event handlers, overide them in your derived class
		virtual void serch( wxCommandEvent& event ) { event.Skip(); }
		virtual void rt( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyFrame2( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame2();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame3
///////////////////////////////////////////////////////////////////////////////
class MyFrame3 : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrl6;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textCtrl7;
		wxTextCtrl* addtext;
		wxButton* rt;

		// Virtual event handlers, overide them in your derived class
		virtual void rt( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyFrame3( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame3();

};

