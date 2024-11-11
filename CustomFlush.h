/*
 * custom_flush.h
 *
 *  Created on: Nov 11, 2024
 *      Author: cyang
 */

#ifndef CUSTOM_FLUSH_H
#define CUSTOM_FLUSH_H

#include <touchgfx/hal/Types.hpp>  // 추가된 헤더 파일

#ifdef __cplusplus
extern "C" {
#endif

void CustomFlushFrameBuffer(const touchgfx::Rect& rect);

#ifdef __cplusplus
}
#endif

#endif // CUSTOM_FLUSH_H
