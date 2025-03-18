/*
 * TouchGFX_Model_Events.h
 * Created on: Mar 18, 2025
 * Author: cyang
 */

#ifndef TOUCHGFX_MODEL_EVENTS_H
#define TOUCHGFX_MODEL_EVENTS_H

#include <stdint.h>



// UI 이벤트 플래그 구조체 정의
typedef struct
{
    uint8_t IsEventSet;  // 이벤트 발생 여부
    int State;           // 버튼 상태 또는 추가 데이터
} ESC_Btn_Pressed_t;

extern ESC_Btn_Pressed_t ESC_Btn_Pressed;

// 이벤트 설정 함수 선언
void TouchGFX_ModelEvents_Set_ESC_Btn_Pressed(int state);



#endif /* TOUCHGFX_MODEL_EVENTS_H */
