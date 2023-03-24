#include <afxwin.h>
#include <string>
using namespace std;

class CMyApp : public CWinApp {
public:
    virtual BOOL InitInstance();
};

class CMainWindow : public CFrameWnd {
public:
    CMainWindow();
    afx_msg void OnAdd();
    afx_msg void OnSubtract();
    afx_msg void OnMultiply();
    afx_msg void OnDivide();
    afx_msg void OnClear();
    afx_msg void OnEqual();
    afx_msg void OnNumber(UINT nID);
    afx_msg void OnUpdateDisplay();
    DECLARE_MESSAGE_MAP()
private:
    double m_number1;
    double m_number2;
    double m_result;
    string m_display;
    bool m_newNumber;
    bool m_decimal;
};

BOOL CMyApp::InitInstance() {
    m_pMainWnd = new CMainWindow();
    m_pMainWnd->ShowWindow(m_nCmdShow);
    m_pMainWnd->UpdateWindow();
    return TRUE;
}

CMainWindow::CMainWindow() {
    Create(NULL, _T("Calculator"), WS_OVERLAPPEDWINDOW, CRect(0, 0, 300, 300));
    m_number1 = 0;
    m_number2 = 0;
    m_result = 0;
    m_display = "";
    m_newNumber = true;
    m_decimal = false;
    CMenu* pMenu = new CMenu();
    pMenu->CreateMenu();
    CMenu* pSubMenu = new CMenu();
    pSubMenu->CreatePopupMenu();
    pSubMenu->AppendMenu(MF_STRING, ID_ADD, _T("&Add"));
    pSubMenu->AppendMenu(MF_STRING, ID_SUBTRACT, _T("&Subtract"));
    pSubMenu->AppendMenu(MF_STRING, ID_MULTIPLY, _T("&Multiply"));
    pSubMenu->AppendMenu(MF_STRING, ID_DIVIDE, _T("&Divide"));
    pSubMenu->AppendMenu(MF_SEPARATOR);
    pSubMenu->AppendMenu(MF_STRING, ID_CLEAR, _T("&Clear"));
    pSubMenu->AppendMenu(MF_STRING, ID_EQUAL, _T("&Equal"));
    pMenu->AppendMenu(MF_POPUP, (UINT_PTR)pSubMenu->m_hMenu, _T("&Operations"));
    SetMenu(pMenu);
    CString str = _T("0123456789.");
    for (int i = 0; i < str.GetLength(); i