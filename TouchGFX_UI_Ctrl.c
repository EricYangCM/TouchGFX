/*
 * UI_Ctrl.c
 * Created on: Mar 18, 2025
 * Author: cyang
 */

#include "main.h"


// ESC 버튼 이벤트 상태 저장 변수
ESC_Btn_Pressed_t ESC_Btn_Pressed = {0, 0};

// ESC 버튼 이벤트 발생 설정
void TouchGFXUICtrl_Set_Event_ESC_Btn_Pressed(int state)
{
    ESC_Btn_Pressed.IsEventSet = 1;  // 이벤트 발생 플래그 설정
    ESC_Btn_Pressed.State = state;   // 상태 값 저장
}
