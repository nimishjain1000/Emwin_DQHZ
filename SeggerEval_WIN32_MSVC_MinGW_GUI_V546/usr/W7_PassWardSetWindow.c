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

#include "DIALOG.h"#include "mygui_init.h"

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
#define ID_EDIT_0 (GUI_ID_USER + 0x0A)


// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
unsigned char mimasezi[] = "\xe5\xaf\x86\xe7\xa0\x81\xe8\xae\xbe\xe7\xbd\xae";unsigned char xuanze[] = "\xe6\x8c\x89<F1>\xe9\x94\xae\xe9\x80\x89\xe6\x8b\xa9\xe5\xaf\x86\xe7\xa0\x81\xe7\xba\xa7\xe5\x88\xab\xef\xbc\x9a";unsigned char shurumima[] ="\xe8\xbe\x93\xe5\x85\xa5\xe6\x96\xb0\xe5\xaf\x86\xe7\xa0\x81\xef\xbc\x9a:";
// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "Window", ID_WINDOW_0, 0, 0, 480, 320, 0, 0x0, 0 },
  { TEXT_CreateIndirect, mimasezi, ID_TEXT_0, 6, 1, 130, 30, 0, 0x0, 0 },
  { TEXT_CreateIndirect, xuanze, ID_TEXT_1, 20, 76, 251, 30, 0, 0x0, 0 },
  { TEXT_CreateIndirect, yonghujibie, ID_TEXT_2, 6, 293, 130, 30, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "0", ID_TEXT_3, 277, 293, 206, 28, 0, 0x0, 0 },
  { TEXT_CreateIndirect, shurumima, ID_TEXT_4, 140, 111, 140, 30, 0, 0x0, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_0, 273, 111, 68, 30, 0, 0x4, 0 },
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

  switch (pMsg->MsgId) { case WM_PAINT :    GUI_SetColor(HFM_HEAD_BK);    GUI_FillRect(0,0,480,30);    GUI_FillRect(0,290,480,320);    break;
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Window'
    //
        hItem = pMsg->hWin;
    WINDOW_SetBkColor(hItem, HFM_COLOR_BK);    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);        EDIT_SetFont(hItem, GUI_FONT_20_1);
    // USER START (Optionally insert additional code for further widget initialization)        hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_3);        _hwTime[6] = hItem;
    TEXT_SetFont(hItem, GUI_FONT_24_1);
    TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
    TEXT_SetText(hItem, timee);
    //
    // Initialization of 'Edit'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);
    EDIT_SetText(hItem, "");    EDIT_EnableBlink(hItem, 300, 1);
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
*/void W7_PassWordSetWindowDisplay(void)
{

}
void W7_PassWordSetWindowProcess(void)
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

WM_HWIN Create_W7_PasswardSet_Window(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
