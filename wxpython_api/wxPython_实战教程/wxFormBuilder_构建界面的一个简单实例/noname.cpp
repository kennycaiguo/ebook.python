///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "noname.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );


	bSizer1->Add( 0, 0, 1, wxEXPAND, 5 );

	YouDaoHelper = new wxStaticText( this, wxID_ANY, wxT("YouDaoHelper"), wxPoint( 100,100 ), wxDefaultSize, 0 );
	YouDaoHelper->Wrap( -1 );
	YouDaoHelper->SetFont( wxFont( 20, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("新宋体") ) );
	YouDaoHelper->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	YouDaoHelper->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVEBORDER ) );
	YouDaoHelper->SetMinSize( wxSize( -1,50 ) );

	bSizer1->Add( YouDaoHelper, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer1->Add( 0, 0, 1, wxEXPAND, 5 );

	sea_button = new wxButton( this, wxID_ANY, wxT("search word"), wxDefaultPosition, wxSize( -1,45 ), 0 );
	sea_button->SetFont( wxFont( 16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer1->Add( sea_button, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer1->Add( 0, 0, 1, wxEXPAND, 5 );

	add_button = new wxButton( this, wxID_ANY, wxT("add word"), wxPoint( -1,-1 ), wxSize( 200,45 ), 0 );
	add_button->SetFont( wxFont( 16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer1->Add( add_button, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer1->Add( 0, 0, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	sea_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::search ), NULL, this );
	add_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::add ), NULL, this );
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	sea_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::search ), NULL, this );
	add_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::add ), NULL, this );

}

MyFrame2::MyFrame2( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVEBORDER ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	sea_word = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( sea_word, 0, wxALIGN_CENTER|wxALL, 5 );

	sea_button = new wxButton( this, wxID_ANY, wxT("查询"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( sea_button, 0, wxALIGN_CENTER|wxALL, 5 );

	text = new wxStaticText( this, wxID_ANY, wxT("您查询的单词为："), wxDefaultPosition, wxDefaultSize, 0 );
	text->Wrap( -1 );
	bSizer2->Add( text, 0, wxALIGN_CENTER|wxALL, 5 );

	fanyi = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 250,110 ), 0 );
	fanyi->Wrap( -1 );
	fanyi->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );

	bSizer2->Add( fanyi, 0, wxALIGN_CENTER|wxALL, 5 );

	rt = new wxButton( this, wxID_ANY, wxT("返回"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( rt, 0, wxALIGN_CENTER|wxALL, 5 );


	this->SetSizer( bSizer2 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	sea_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame2::serch ), NULL, this );
	rt->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame2::rt ), NULL, this );
}

MyFrame2::~MyFrame2()
{
	// Disconnect Events
	sea_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame2::serch ), NULL, this );
	rt->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame2::rt ), NULL, this );

}

MyFrame3::MyFrame3( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	wxGridSizer* gSizer4;
	gSizer4 = new wxGridSizer( 0, 2, 0, 0 );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("您的邮箱"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	gSizer4->Add( m_staticText7, 0, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl6 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer4->Add( m_textCtrl6, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("您的密码"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	gSizer4->Add( m_staticText8, 0, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl7 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl7->SetBackgroundColour( wxColour( 240, 240, 240 ) );

	gSizer4->Add( m_textCtrl7, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer3->Add( gSizer4, 1, wxEXPAND, 5 );

	addtext = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 300,100 ), 0 );
	bSizer3->Add( addtext, 0, wxALIGN_CENTER|wxALL, 5 );

	rt = new wxButton( this, wxID_ANY, wxT("返回"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( rt, 0, wxALIGN_CENTER|wxALL, 5 );


	this->SetSizer( bSizer3 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	rt->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame3::rt ), NULL, this );
}

MyFrame3::~MyFrame3()
{
	// Disconnect Events
	rt->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame3::rt ), NULL, this );

}
