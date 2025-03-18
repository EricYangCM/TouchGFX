/*
 * UI_Ctrl.h
 * Created on: Mar 18, 2025
 * Author: cyang
 */

#ifndef UI_TOUCHGFX_UI_CTRL_H
#define UI_TOUCHGFX_UI_CTRL_H

#include <stdint.h>



// ESC Button Click Event
typedef struct
{
    uint8_t IsEventSet;
    int State;
} ESC_Btn_Pressed_t;
extern ESC_Btn_Pressed_t ESC_Btn_Pressed;
void TouchGFX_Set_Event_ESC_Btn_Pressed(int state);


// Go to Screen Event
typedef struct
{
    uint8_t IsEventSet;
    int ScreenNum;
} Go_to_Screen_t;
extern Go_to_Screen_t Go_to_Screen;
void TouchGFX_Set_Event_Go_to_Screen(int state);



#endif /* UI_TOUCHGFX_UI_CTRL_H */
