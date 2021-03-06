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
#define ID_WINDOW_0 (GUI_ID_USER + 0x0C)
#define ID_LISTVIEW_0 (GUI_ID_USER + 0x18)
#define ID_TEXT_0 (GUI_ID_USER + 0x01)
#define ID_TEXT_1 (GUI_ID_USER + 0x02)
#define ID_TEXT_2 (GUI_ID_USER + 0x03)

// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/#if CODEBLACK_FLAGunsigned char shebeichaxun[] = "\xe8\xae\xbe\xe5\xa4\x87\xe4\xbf\xa1\xe6\x81\xaf";
unsigned char  dizzz[] = "\xe5\x9c\xb0\xe5\x9d\x80";unsigned char zaixxx[] ="\xe5\x9c\xa8\xe7\xba\xbf";unsigned char leixingg[] = "\xe7\xb1\xbb\xe5\x9e\x8b";unsigned char fazz[] = "\xe9\x98\x80\xe5\x80\xbc";unsigned char shishi[] ="\xe5\xae\x9e\xe6\x97\xb6";unsigned char weizhii[] = "\xe4\xbd\x8d\xe7\xbd\xae";unsigned char zaixianzongshu [] = "\xe5\x9c\xa8\xe7\xba\xbf\xe6\x80\xbb\xe6\x95\xb0:";#elseconst unsigned char shebeichaxun[] ="设备信息";unsigned char  dizzz[] = "地址";unsigned char zaixxx[] = "在线";unsigned char leixingg[] = "类型";unsigned char fazz[] = "阀值";unsigned char shishi[] = "实时";unsigned char weizhii[] = "位置";unsigned char zaixianzongshu [] = "在线总数:";#endif // CODEBLACK_FLAG
//unsigned char
/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "Window", ID_WINDOW_0, 0, 0, 480, 320, 0, 0x0, 0 },
  { LISTVIEW_CreateIndirect, "Listview", ID_LISTVIEW_0, 0, 30, 480, 225, 0, 0x0, 0 },  { TEXT_CreateIndirect, "0", ID_TEXT_0, 277, 293, 206, 28, 0, 0x0, 0 },
  { TEXT_CreateIndirect, yonghujibie, ID_TEXT_1, 6, 293, 130, 30, 0, 0x0, 0 },
  { TEXT_CreateIndirect, shebeichaxun, ID_TEXT_2, 6, 1, 130, 30, 0, 0x0, 0 },
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
  int     Id;  HEADER_Handle hHeader;  unsigned char userstring[30];
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {  case WM_PAINT :    if(WM_Paint_Flag == 1)    {        WM_Paint_Flag = 0;       GUI_SetColor(HFM_HEAD_BK);       GUI_FillRect(0,0,480,30);       GUI_FillRect(0,290,480,320);       GUI_SetBkColor(HFM_COLOR_BK);       GUI_SetFont(&GUI_Fontstay24);       GUI_SetColor(GUI_BLACK);       GUI_SetBkColor(HFM_HEAD_BK);       GUI_DispStringAt(zaixianzongshu, 300, 1);           //显示用户级别       hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_1);       sprintf(userstring,"\xe7\x94\xa8\xe6\x88\xb7\xe7\xba\xa7\xe5\x88\xab:%d",userlevel);
       TEXT_SetText(hItem, userstring);//    }    break;
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Window'
    //
        hItem = pMsg->hWin;
        WINDOW_SetBkColor(hItem, HFM_COLOR_BK);    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_0);        _hwTime[21] = hItem;
       TEXT_SetFont(hItem, GUI_FONT_24_1);
       TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
       TEXT_SetText(hItem, timee);
    //
    // Initialization of 'Listview'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0);     hHeader = LISTVIEW_GetHeader(hItem);     HEADER_SetFont(hHeader,&GUI_Fontstay24);   // LISTVIEW_SetFont(hItem,&GUI_Fontstay24);
    LISTVIEW_AddColumn(hItem, 50, dizzz, GUI_TA_HCENTER | GUI_TA_VCENTER);
    LISTVIEW_AddColumn(hItem, 50, zaixxx, GUI_TA_HCENTER | GUI_TA_VCENTER);
    LISTVIEW_AddColumn(hItem, 96, leixingg, GUI_TA_HCENTER | GUI_TA_VCENTER);
    LISTVIEW_SetGridVis(hItem, 1);
    LISTVIEW_AddColumn(hItem, 50, fazz, GUI_TA_HCENTER | GUI_TA_VCENTER);
    LISTVIEW_AddColumn(hItem, 50, shishi, GUI_TA_HCENTER | GUI_TA_VCENTER);
    LISTVIEW_AddColumn(hItem, 184, weizhii, GUI_TA_HCENTER | GUI_TA_VCENTER);
    LISTVIEW_AddRow(hItem, NULL);
    LISTVIEW_SetRowHeight(hItem, 32);    LISTVIEW_SetHeaderHeight(hItem, 30);
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_LISTVIEW_0: // Notifications sent by 'Listview'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_SEL_CHANGED:
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
*/void W23_DeviceQueryWindowDisplay(void)
{

}
void W23_DeviceQueryWindowProcess(void)
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

WM_HWIN Create_W23_DeviceInfo_Window(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
