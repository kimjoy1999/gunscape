//////////////////////////////////////////////////////////////////////////////////////////////////
//
// 파일이름: font.h
//
// 내용: 폰트출력?
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef  __FONT_H__
#define  __FONT_H__

#include <d3dx9.h>
#include "coord_def.h"

class Direct_Manager;

void d3dx_vprintf(coord_def offset_, float scale_, D3DCOLOR color_, const char* str, ...);


#endif // __FONT_H__