/*
 * custom_flush.cpp
 *
 *  Created on: Nov 11, 2024
 *      Author: cyang
 */



// TouchGFX rebuild 시
// TouchGFX/target/generated/TouchGFXGeneratedHAL.cpp에서 flush 부분을
// CustomFlushFrameBuffer(rect); 로 교체할 것


// Vsync 함수 호출 할 것 (16~20ms)


#include "main.h"
#include "custom_flush.h"
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/hal/OSWrappers.hpp>

#define		CUSTOM_FRAMEBUFFER_SIZE		20480

unsigned char _CustomFramBuffer[CUSTOM_FRAMEBUFFER_SIZE * 2];

void CustomFlushFrameBuffer(const touchgfx::Rect& rect)
{

    uint16_t* frameBuffer = (uint16_t*)touchgfx::HAL::getInstance()->lockFrameBuffer();

    // Get Frame Buffer
    unsigned int tempDataSize = rect.width * rect.height;
    for (unsigned int i = 0; i < tempDataSize; i++)
    {
    	_CustomFramBuffer[i * 2] = (uint8_t)((frameBuffer[i] >> 8) & 0xFF);    // 상위 바이트
    	_CustomFramBuffer[i * 2 + 1] = (uint8_t)(frameBuffer[i] & 0xFF);       // 하위 바이트
    }

    OLEDCtrl_DrawBlock(rect.x, rect.y, rect.width, rect.height, _CustomFramBuffer);


    // 프레임버퍼 잠금 해제
    touchgfx::HAL::getInstance()->unlockFrameBuffer();
}




extern "C" void CustomFlush_GenerateVSync() {

	touchgfx::OSWrappers::signalVSync();
}



