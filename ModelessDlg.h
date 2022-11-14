#pragma once

class CModelessDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CModelessDlg)

public:
	CModelessDlg(CWnd* pParent = nullptr);
	virtual ~CModelessDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MODELESS_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);

	DECLARE_MESSAGE_MAP()
};
