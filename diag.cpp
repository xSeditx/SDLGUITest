// diag.cpp : implementation file
//

#define _AFXDLL



#include "stdafx.h"
#include "diag.h"
#include "afxdialogex.h"


// diag dialog

IMPLEMENT_DYNAMIC(diag, CDialogEx)

diag::diag(CWnd* pParent /*=NULL*/)
	: CDialogEx(diag::IDD, pParent)
{

	EnableAutomation();

}

diag::~diag()
{
}

void diag::OnFinalRelease()
{
	// When the last reference for an automation object is released
	// OnFinalRelease is called.  The base class will automatically
	// deletes the object.  Add additional cleanup required for your
	// object before calling the base class.

	CDialogEx::OnFinalRelease();
}

void diag::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(diag, CDialogEx)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(diag, CDialogEx)
END_DISPATCH_MAP()

// Note: we add support for IID_Idiag to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .IDL file.

// {5C268408-49F4-45D0-BCDF-9B7BEA5F3FFE}
static const IID IID_Idiag =
{ 0x5C268408, 0x49F4, 0x45D0, { 0xBC, 0xDF, 0x9B, 0x7B, 0xEA, 0x5F, 0x3F, 0xFE } };

BEGIN_INTERFACE_MAP(diag, CDialogEx)
	INTERFACE_PART(diag, IID_Idiag, Dispatch)
END_INTERFACE_MAP()


// diag message handlers
