#pragma once


// CModalDlg dialog

class CModalDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CModalDlg)

public:
	CModalDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CModalDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MODAL_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
};
