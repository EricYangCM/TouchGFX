/*
 * UI_Ctrl.h
 *
 *  Created on: Mar 17, 2025
 *      Author: cyang
 */

#ifndef UI_UI_CTRL_H_
#define UI_UI_CTRL_H_


// UI Status 구조체 정의
typedef struct
{
    uint8_t ScreenNum;  // Current Screen Number

} UI_Status_t;
extern UI_Status_t UI_Status;


void UICtrl_Init();


void UICtrl_Processing();


#endif /* UI_UI_CTRL_H_ */
