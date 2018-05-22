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

#include "DIALOG.h"
#include "mygui_init.h"
/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_FRAMEWIN_0 (GUI_ID_USER + 0x00)
#define ID_BUTTON_0 (GUI_ID_USER + 0x01)
#define ID_BUTTON_1 (GUI_ID_USER + 0x02)
#define ID_BUTTON_2 (GUI_ID_USER + 0x03)
#define ID_BUTTON_3 (GUI_ID_USER + 0x04)
#define ID_BUTTON_4 (GUI_ID_USER + 0x05)
#define ID_BUTTON_5 (GUI_ID_USER + 0x06)
#define ID_BUTTON_6 (GUI_ID_USER + 0x07)
#define ID_BUTTON_7 (GUI_ID_USER + 0x08)
#define ID_BUTTON_8 (GUI_ID_USER + 0x09)
#define ID_BUTTON_9 (GUI_ID_USER + 0x0A)
#define ID_BUTTON_10 (GUI_ID_USER + 0x0B)
#define ID_BUTTON_11 (GUI_ID_USER + 0x0C)
#define ID_BUTTON_12 (GUI_ID_USER + 0x0D)
#define ID_BUTTON_13 (GUI_ID_USER + 0x0E)
#define ID_BUTTON_14 (GUI_ID_USER + 0x0F)
#define ID_BUTTON_15 (GUI_ID_USER + 0x10)
#define ID_BUTTON_16 (GUI_ID_USER + 0x11)
#define ID_BUTTON_17 (GUI_ID_USER + 0x12)
#define ID_BUTTON_18 (GUI_ID_USER + 0x13)
#define ID_BUTTON_19 (GUI_ID_USER + 0x14)
#define ID_BUTTON_20 (GUI_ID_USER + 0x15)
#define ID_BUTTON_21 (GUI_ID_USER + 0x16)
#define ID_BUTTON_22 (GUI_ID_USER + 0x17)
#define ID_BUTTON_23 (GUI_ID_USER + 0x18)
#define ID_BUTTON_24 (GUI_ID_USER + 0x19)
#define ID_BUTTON_25 (GUI_ID_USER + 0x1A)


// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { FRAMEWIN_CreateIndirect, "keyboard", ID_FRAMEWIN_0, 20, 335, 400, 180, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "1", ID_BUTTON_0, 3, 13, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "4", ID_BUTTON_1, 3, 48, 55, 20, 0, 0x0, 0 },
  //{ BUTTON_CreateIndirect, "9", ID_BUTTON_2, 3, 843, 50, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "7", ID_BUTTON_3, 3, 85, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Cancel", ID_BUTTON_4, 3, 120, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "2", ID_BUTTON_5, 66, 12, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "5", ID_BUTTON_6, 66, 48, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "8", ID_BUTTON_7, 65, 85, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "0", ID_BUTTON_8, 66, 120, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "3", ID_BUTTON_9, 129, 12, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "6", ID_BUTTON_10, 129, 48, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "9", ID_BUTTON_11, 129, 85, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "ok", ID_BUTTON_12, 130, 120, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Slience", ID_BUTTON_13, 192, 12, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Reset", ID_BUTTON_14, 270, 12, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "up", ID_BUTTON_15, 234, 41, 42, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "left", ID_BUTTON_16, 187, 69, 42, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Down", ID_BUTTON_17, 235, 97, 42, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "menu", ID_BUTTON_18, 234, 70, 41, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "right", ID_BUTTON_19, 282, 69, 42, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "F1", ID_BUTTON_20, 191, 120, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "F2", ID_BUTTON_21, 270, 120, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Alarm", ID_BUTTON_22, 333, 12, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Fault", ID_BUTTON_23, 333, 47, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Shield", ID_BUTTON_24, 333, 84, 55, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "out", ID_BUTTON_25, 333, 120, 55, 20, 0, 0x0, 0 },
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
  int NCode;
  int Id;
  int i;
  WM_HWIN  hDlg;
   WM_HWIN  hItem;
  int      Pressed;
  // USER START (Optionally insert additional variables)
  // USER END
  Pressed = 0;
  hDlg = pMsg->hWin;
  switch (pMsg->MsgId) {
	case WM_PAINT:
    break;
  case WM_INIT_DIALOG:
    for (i = 0; i <27; i++) {
      hItem = WM_GetDialogItem(hDlg, GUI_ID_USER + i);
      BUTTON_SetFocussable(hItem, 0);                       /* Set all buttons non focussable */
    }
   // WM_GetDialogItem(hDlg, GUI_ID_USER + 12);
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_BUTTON_0: // Notifications sent by '1'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
		Pressed = 1;
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		 GUI_SendKeyMsg('1', Pressed);		  GUI_StoreKeyMsg('1', Pressed);		 WinKeyValue = '1';		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_1: // Notifications sent by '4'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		 GUI_SendKeyMsg('4', Pressed);         WinKeyValue = '4';		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_2: // Notifications sent by '9'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		 GUI_SendKeyMsg('9', Pressed);		 WinKeyValue = '9';		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_3: // Notifications sent by '7'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		 GUI_SendKeyMsg('7', Pressed);		 WinKeyValue = '7';		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_4: // Notifications sent by 'Cancel'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		 GUI_SendKeyMsg(GUI_KEY_ESCAPE, Pressed);		 WinKeyValue = GUI_KEY_ESCAPE;		 key_flag = 1;
//		 if(WinLastIndex == 1)
//         {
//           WinIndex = 0;
//         }
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_5: // Notifications sent by '2'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		 GUI_SendKeyMsg('2', Pressed);         WinKeyValue = '2';		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_6: // Notifications sent by '5'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		 GUI_SendKeyMsg('5', Pressed);         WinKeyValue = '5';		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_7: // Notifications sent by '8'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		 GUI_SendKeyMsg('8', Pressed);         WinKeyValue = '8';		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_8: // Notifications sent by '0'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		 GUI_SendKeyMsg('0', Pressed);         WinKeyValue = '0';		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_9: // Notifications sent by '3'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		 GUI_SendKeyMsg('3', Pressed);         WinKeyValue = '3';		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_10: // Notifications sent by '6'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		 GUI_SendKeyMsg('6', Pressed);         WinKeyValue = '6';		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_11: // Notifications sent by '9'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		 GUI_SendKeyMsg('9', Pressed);         WinKeyValue = '9';		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_12: // Notifications sent by 'ok'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		 GUI_SendKeyMsg(GUI_KEY_ENTER, Pressed);         WinKeyValue = GUI_KEY_ENTER;		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_13: // Notifications sent by 'Slience'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		 GUI_SendKeyMsg(GUI_USR_KEY_SLIENCE, Pressed);         WinKeyValue = GUI_USR_KEY_SLIENCE;		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_14: // Notifications sent by 'Reset'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		 GUI_SendKeyMsg(GUI_USR_KEY_RESET, Pressed);         WinKeyValue = GUI_USR_KEY_RESET;		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_15: // Notifications sent by 'up'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		GUI_SendKeyMsg(GUI_KEY_UP, Pressed);         WinKeyValue = GUI_KEY_UP;		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_16: // Notifications sent by 'left'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		GUI_SendKeyMsg(GUI_KEY_LEFT, Pressed);         WinKeyValue = GUI_KEY_LEFT;		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_17: // Notifications sent by 'Down'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		GUI_SendKeyMsg(GUI_KEY_DOWN, Pressed);         WinKeyValue = GUI_KEY_DOWN;		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_18: // Notifications sent by 'menu'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		GUI_SendKeyMsg(GUI_KEY_HOME, Pressed);         WinKeyValue = GUI_KEY_HOME;		 key_flag = 1;
		//WinIndex = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_19: // Notifications sent by 'right'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		GUI_SendKeyMsg(GUI_KEY_RIGHT, Pressed);         WinKeyValue = GUI_KEY_RIGHT;		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_20: // Notifications sent by 'F1'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		GUI_SendKeyMsg(GUI_KEY_F1, Pressed);         WinKeyValue = GUI_KEY_F1;		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_21: // Notifications sent by 'F2'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		GUI_SendKeyMsg(GUI_KEY_F2, Pressed);         WinKeyValue = GUI_KEY_F2;		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_22: // Notifications sent by 'Alarm'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		GUI_SendKeyMsg(GUI_USR_KEY_ALARM, Pressed);        WinKeyValue = GUI_USR_KEY_ALARM;		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_23: // Notifications sent by 'Fault'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		GUI_SendKeyMsg(GUI_USR_KEY_FAULT, Pressed);        WinKeyValue = GUI_USR_KEY_FAULT;		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_24: // Notifications sent by 'Shield'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		GUI_SendKeyMsg(GUI_USR_KEY_SHEILD, Pressed);        WinKeyValue = GUI_USR_KEY_SHEILD;		 key_flag = 1;
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_25: // Notifications sent by 'out'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
		Pressed = 1;
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
		GUI_SendKeyMsg(GUI_USR_KEY_OUT, Pressed);        WinKeyValue = GUI_USR_KEY_OUT;		 key_flag = 1;
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
*/
/*********************************************************************
*
*       CreateFramewin
*/#if 1
WM_HWIN FHM_KeyBoard_Main(void);
WM_HWIN FHM_KeyBoard_Main(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  FRAMEWIN_SetMoveable(hWin,1);   WM_SetStayOnTop(hWin, 1);
  return hWin;
}#endif

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
