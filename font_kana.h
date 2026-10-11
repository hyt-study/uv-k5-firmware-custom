#ifndef FONT_KANA_H
#define FONT_KANA_H

#include <stdint.h>

// 0xB0(ｰ) から 0xDF(ﾟ) までの48文字分
// 各文字 7バイト（横7列分、各列縦8ピクセル：LSBが最上部）
extern const uint8_t gFontKana[48][7];

#endif