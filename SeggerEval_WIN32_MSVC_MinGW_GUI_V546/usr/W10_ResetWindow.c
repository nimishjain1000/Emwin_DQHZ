/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.32                          *
*        Compiled Oct  8 2015, 11:59:02                              *
*        (c) 2015 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"#include "mygui_init.h"#include "../usr/stay24.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_WINDOW_0 (GUI_ID_USER + 0x00)
#define ID_TEXT_0 (GUI_ID_USER + 0x01)
#define ID_TEXT_1 (GUI_ID_USER + 0x02)
#define ID_TEXT_2 (GUI_ID_USER + 0x06)
#define ID_TEXT_3 (GUI_ID_USER + 0x07)
#define ID_TEXT_4 (GUI_ID_USER + 0x09)
#define ID_EDIT_0 (GUI_ID_USER + 0x0B)


// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
unsigned char xitongchushi[] ="\xe7\xb3\xbb\xe7\xbb\x9f\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96";unsigned char info1[] = "\xe7\xb3\xbb\xe7\xbb\x9f\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96,\xe8\xaf\xb7\xe8\xb0\xa8\xe6\x85\x8e\xe6\x93\x8d\xe4\xbd\x9c!";//系统初始化请谨慎操作unsigned char info2[] = "\xe8\xbe\x93\xe5\x85\xa5\xe8\xb6\x85\xe7\xba\xa7\xe5\xaf\x86\xe7\xa0\x81\xef\xbc\x9a:";//输入超级密码unsigned char info3[] = "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x9a";//初始化数据unsigned char info4[] = "\xe6\x8c\x89<F1>\xe9\x94\xae\xe9\x80\x89\xe6\x8b\xa9\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\x95\xb0\xe6\x8d\xae:\xe5\x85\xa8\xe9\x83\xa8/\xe8\xae\xb0\xe5\xbd\x95/\xe9\x85\x8d\xe7\xbd\xae";
// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "Window", ID_WINDOW_0, 0, 0, 480, 320, 0, 0x0, 0 },
  { TEXT_CreateIndirect, xitongchushi, ID_TEXT_0, 6, 1, 130, 30, 0, 0x0, 0 },
  { TEXT_CreateIndirect, yonghujibie, ID_TEXT_2, 6, 293, 130, 30, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "Text", ID_TEXT_3, 277, 293, 206, 28, 0, 0x0, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_0, 222, 76, 51, 24, 0, 0x64, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {   case WM_PAINT :    GUI_SetColor(HFM_HEAD_BK);    GUI_FillRect(0,0,480,30);    GUI_FillRect(0,290,480,320);    GUI_SetBkColor(HFM_COLOR_BK);     GUI_SetFont(&GUI_Fontstay24);     GUI_SetColor(GUI_RED);     GUI_DispStringAt(info1, 100, 40);       GUI_SetColor(GUI_BLACK);     GUI_DispStringAt(info2, 70, 75);     GUI_DispStringAt(info3, 90, 110);     GUI_DispStringAt(info4, 6, 160);    break;
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Window'
    //
        hItem = pMsg->hWin;
        WINDOW_SetBkColor(hItem, HFM_COLOR_BK);        hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);        EDIT_EnableBlink(hItem, 300, 1);       EDIT_SetFont(hItem, GUI_FONT_20_1);
    // USER START (Optionally insert additional code for further widget initialization)        hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_3);        _hwTime[9] = hItem;
       TEXT_SetFont(hItem, GUI_FONT_24_1);
       TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
       TEXT_SetText(hItem, timee);
    // Initialization of 'Edit'
    //
  //    EDIT_EnableBlink(hItem, 300, 1);
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_EDIT_0: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    // USER START (Optionally insert additional code for further Ids)
    // USER END
    }
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/void W10_ResetWindowDisplay(void)
{

}
void W10_ResetWindowProcess(void)
{
     switch(WinKeyValue)
     {
     case GUI_KEY_ENTER://ok键

          break;
     case GUI_KEY_HOME://菜单按钮
          break;
     case GUI_KEY_LEFT://左键
          break;
	 case GUI_KEY_UP://下键
          break;
	 case GUI_KEY_DOWN://下键
          break;
	 case GUI_KEY_ESCAPE://取消键
            break;
	case GUI_USR_KEY_ALARM://火警界面键
        break;
	case GUI_USR_KEY_FAULT://故障界面键
        break;
	case GUI_USR_KEY_SHEILD://屏蔽界面键
	    break;
	case GUI_USR_KEY_OUT://输出界面键
		break;
	case GUI_USR_KEY_SLIENCE://消音键
		break;
	case GUI_USR_KEY_RESET://复位键
		break;
	case GUI_KEY_F1://F1功能键
		break;
	case GUI_KEY_F2://F2功能键
		break;
	case '0':
		break;
	case '1':
	case '2':
	case '3':
	case '4':
    case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		break;
	default :
			break;
     }
}
/*********************************************************************
*
*       CreateWindow
*/

WM_HWIN Create_W10_Reset_Window(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
