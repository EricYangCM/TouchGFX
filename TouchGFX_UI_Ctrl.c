/*
 * UI_Ctrl.c
 *
 *  Created on: Mar 17, 2025
 *      Author: cyang
 */


#include "main.h"


// Encoder 이벤트
void Encoder_Event_Handler(EncoderMode_t mode, int value)
{
    if (mode == ENCODER_MODE_UI)
    {

    }
    else if (mode == ENCODER_MODE_DIMMING)
    {

    }
    else if(mode == ENCODER_MODE_TACT)
    {

    }
}


// ESC 버튼 클릭 이벤트
void ESC_Button_Event_Handler(uint8_t state)
{
	TouchGFX_Set_Event_ESC_Btn_Pressed(1);
}


UI_Status_t UI_Status;

void UICtrl_Init()
{
	// 구조체 초기화
	UI_Status.ScreenNum = 0;

	// 엔코더 이벤트 핸들러 등록
	EncKnob_Set_Callback(Encoder_Event_Handler);

	// ESC 버튼 이벤트 핸들러 등록
	ESCBtn_Set_Callback(ESC_Button_Event_Handler);
}









// UI Processing
void UICtrl_Processing()
{

	int a = 0;
	
	a++;

}


















