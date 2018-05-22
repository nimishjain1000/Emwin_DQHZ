#include <stdint.h>
#include "GUI.h"
#include "WM.h"
#include "dialog.h"

#include "mygui_init.h"
unsigned char WinIndex;//��������
unsigned char WinLastIndex;
WM_HWIN window0;//��ؽ���
WM_HWIN menu_window;//���˵�����
void mygui_init(void)
{
    WM_SetCreateFlags(WM_CF_MEMDEV);
	EDIT_SetDefaultTextAlign(GUI_TA_VCENTER);
	TEXT_SetDefaultFont(&GUI_Fontstay24);
	   GUI_UC_SetEncodeUTF8();
	 TEXT_SetDefaultTextColor(GUI_BLACK);
   //  keyboard_window= FHM_KeyBoard_Main();

	 WM_HideWindow(menu_window);
}
//���ڽ��溯������
WIN_CLASS   WinClass[] ={
    0,
    0,
    0,
    0,
    0,0,0,0,0,0,0,0,
    W1_MainWindowDisplay,
    W1_MainWindowProcess,

},
    //1����ؽ���
{
    0,
    WIN_TYPE_TEXT,
    0,
    0,
    0,0,0,0,0,0,0,0,
    W1_MainWindowDisplay,
    W1_MainWindowProcess,

},
{
    1,
    WIN_TYPE_MENU,
    5,
    1,
    3,4,20,21,22,0,0,0,
    W2_menuWindowDisplay,
    W2_menuWindowProcess,
},
    2,
    WIN_TYPE_MENU,
    7,
    1,
    5,6,7,8,9,10,11,0,
    W3_SystemWindowDisplay,
    W3_SystemWindowProcess,
},
    2,
    WIN_TYPE_MENU,
    5,
    1,
    15,16,17,18,19,23,0,0,
    W4_EventWindowDisplay,
    W4_EventWindowProcess,
},
    3,
    WIN_TYPE_EDIT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W5_TimeSetWindowDisplay,
    W5_TimeSetWindowProcess,
},
    3,
    WIN_TYPE_EDIT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W6_PrintSetWindowDisplay,
    W6_PrintSetWindowProcess,
},
    3,
    WIN_TYPE_EDIT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W7_PassWordSetWindowDisplay,
    W7_PassWordSetWindowProcess,
},
    3,
    WIN_TYPE_MENU,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W8_EditdeviceWindowDisplay,
    W8_EditdeviceWindowProcess,
},
    3,
    WIN_TYPE_MENU,
    0,
    1,
    12,13,14,0,0,0,0,0,
    W9_CommunicationWindowDisplay,
    W9_CommunicationWindowProcess,
},
    3,
    WIN_TYPE_EDIT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W10_ResetWindowDisplay,
    W10_ResetWindowProcess,
},
    3,
    WIN_TYPE_TEXT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W11_UpdateWindowDisplay,
    W11_UpdateWindowProcess,
},
    9,
    WIN_TYPE_TEXT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W12_LooploginWindowDisplay,
    W12_LooploginWindowProcess,
},
    9,
    WIN_TYPE_TEXT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W13_CrtSetWindowDisplay,
    W13_CrtSetWindowProcess,
},
    9,
    WIN_TYPE_TEXT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W14_NetSetWindowDisplay,
    W14_NetSetWindowProcess,
},
    4,
    WIN_TYPE_TEXT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W15_AlarmQueryWindowDisplay,
    W15_AlarmQueryWindowProcess,
},
    4,
    WIN_TYPE_TEXT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W16_EventQueryWindowDisplay,
    W16_EventQueryWindowProcess,
},
    4,
    WIN_TYPE_TEXT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W17_SheildQueryWindowDisplay,
    W17_SheildQueryWindowProcess,
},
    4,
    WIN_TYPE_TEXT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W18_OutQueryWindowDisplay,
    W18_OutQueryWindowProcess,
},
    4,
    WIN_TYPE_TEXT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W19_InfoQueryWindowDisplay,
    W19_InfoQueryWindowProcess,
},
    2,
    WIN_TYPE_EDIT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W20_SheildSetWindowDisplay,
    W20_SheildSetWindowProcess,
},
    2,
    WIN_TYPE_EDIT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W21_OpenSetWindowDisplay,
    W21_OpenSetWindowProcess,
},
    2,
    WIN_TYPE_TEXT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W22_SelfCheckWindowDisplay,
    W22_SelfCheckWindowProcess,
},
    4,
    WIN_TYPE_TEXT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W23_DeviceQueryWindowDisplay,
    W23_DeviceQueryWindowProcess,
},
//24,��������
    1,
    WIN_TYPE_TEXT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W24_AlarmWindowDisplay,
    W24_AlarmWindowProcess,
},
    1,
    WIN_TYPE_TEXT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W25_FaultWindowDisplay,
    W25_FaultWindowProcess,
},
    1,
    WIN_TYPE_TEXT,
    0,
    1,
    0,0,0,0,0,0,0,0,
    W26_SheildWindowDisplay,
    W26_SheildWindowProcess,
},




};
//�������
void WinLoad(unsigned char index)
{
   WinIndex = index;
   switch(index)
   {
   case WINDOW0_INDEX:
  //  active_Win =  WM_GetActiveWindow();
       WM_ShowWindow(window0);
       WM_HideWindow(menu_window);
    break;
   case WINDOW_MENU_INDEX:
        WM_ShowWindow(menu_window);
        WM_HideWindow(window0);
    break;
        WM_ShowWindow(SysSet_window);
        WM_HideWindow(window0);
    break;
        WM_HideWindow(menu_window);
        WM_HideWindow(menu_window);
        WM_HideWindow(menu_window);
        WM_HideWindow(menu_window);

   }
}
void WinKeyProcess(void)
{
    unsigned char winindex = 0;
     WinClass[WinIndex].KeyTask();//���봰�ں���
     switch(WinKeyValue)
     {
     case GUI_KEY_ENTER://ok��

          break;
     case GUI_KEY_HOME://�˵���ť
          WinLoad(WINDOW_MENU_INDEX);
          break;
     case GUI_KEY_LEFT://���
          break;
	 case GUI_KEY_UP://�¼�
          break;
	 case GUI_KEY_DOWN://�¼�
          break;
	 case GUI_KEY_ESCAPE://ȡ����
		  winindex = WinClass[WinIndex].QuitWin;
			if(winindex == 0)
			{
			  break;
			}
			WinLoad(winindex);
            break;
	case GUI_USR_KEY_ALARM://�𾯽����
        break;
	case GUI_USR_KEY_FAULT://���Ͻ����
        break;
	case GUI_USR_KEY_SHEILD://���ν����
	    break;
	case GUI_USR_KEY_OUT://��������
		break;
	case GUI_USR_KEY_SLIENCE://������
		break;
	case GUI_USR_KEY_RESET://��λ��
		break;
	case GUI_KEY_F1://F1���ܼ�
		break;
	case GUI_KEY_F2://F2���ܼ�
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
		if(WinClass[WinIndex].property == WIN_TYPE_MENU)
			{
			   winindex = WinClass[WinIndex].WinBranch[WinKeyValue-0x31];
			   if(winindex == 0)
			   	{
			   	  return;
			   	}
			   WinLoad(winindex);
			}
		break;
	default :
			break;
     }
     key_flag = 0;
}
//������������
void Key_Task(void)
{
   if(key_flag)
   {
      WinKeyProcess();
   }
}