// ModalDlg.cpp : implementation file
//

#include "pch.h"
#include "MFC-ModalAndModeless.h"
#include "ModalDlg.h"
#include "afxdialogex.h"


// CModalDlg dialog

IMPLEMENT_DYNAMIC(CModalDlg, CDialogEx)

CModalDlg::CModalDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MODAL_DIALOG, pParent)
{

}

CModalDlg::~CModalDlg()
{
}

void CModalDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CModalDlg, CDialogEx)
END_MESSAGE_MAP()


// CModalDlg message handlers


BOOL CModalDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	CTabCtrl* tabCtrl = (CTabCtrl*)GetDlgItem(IDC_TAB1);

	tabCtrl->InsertItem(0, _T("Tab A"));
	tabCtrl->InsertItem(1, _T("Tab B"));

	return TRUE;
}
