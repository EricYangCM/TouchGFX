/*
 * UI_Ctrl.h
 * Created on: Mar 18, 2025
 * Author: cyang
 */

#ifndef UI_TOUCHGFX_UI_CTRL_H
#define UI_TOUCHGFX_UI_CTRL_H

#include <stdint.h>

// UI 이벤트 플래그 구조체 정의
typedef struct 
{
    uint8_t IsEventSet;  // 이벤트 발생 여부
    int State;           // 버튼 상태 또는 추가 데이터
} ESC_Btn_Pressed_t;

// 외부에서 접근할 수 있도록 선언
extern ESC_Btn_Pressed_t ESC_Btn_Pressed;

// 이벤트 설정 함수 선언
void TouchGFXUICtrl_Set_Event_ESC_Btn_Pressed(int state);

#endif /* UI_TOUCHGFX_UI_CTRL_H */
