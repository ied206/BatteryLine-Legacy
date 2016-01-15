#ifndef DRAWLINE_H_INCLUDED
#define DRAWLINE_H_INCLUDED

#define ID_ABOUT		2000
#define ID_SETTING		2001
#define ID_POWERINFO	2002
#define ID_EXIT			2003

HWND BLDL_InitWindow(HINSTANCE hInstance);
void BLDL_SetWindowPos(HWND hWnd, SYSTEM_POWER_STATUS* stat);
void BLCB_WM_PAINT(HWND hWnd);
void BLCB_WM_POWERBROADCAST(HWND hWnd);
void BLCB_WM_CLOSE(HWND hWnd, uint8_t postquit);
BOOL BLDL_ShowPopupMenu( HWND hWnd, POINT *curpos, int wDefaultItem );

void BLDL_AddTrayIcon(HWND hWnd, UINT uID, UINT flag, UINT uCallbackMsg, LPCWSTR lpInfoStr);
void BLDL_DelTrayIcon(HWND hWnd, UINT uID);

#endif // DRAWLINE_H_INCLUDED