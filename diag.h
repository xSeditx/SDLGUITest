#pragma once

#define _AFXDLL

// diag dialog
#define IDD_DIALOG1 0x00000019
class diag : public CDialogEx
{
	DECLARE_DYNAMIC(diag)

public:
	diag(CWnd* pParent = NULL);   // standard constructor
	virtual ~diag();

	virtual void OnFinalRelease();

// Dialog Data
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};
