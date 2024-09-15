#ifndef _SOFT_H_
#define _SOFT_H_

#include <stdbool.h>

enum { PIXELTYPE_RGBA = 0x00, PIXELTYPE_COLOURINDEX = 0x01 };

typedef struct _pixelformatdesc
{
    unsigned int bufferXSize;
    unsigned int bufferYSize;
    unsigned int bufferCount;
    unsigned int refreshRate;
    unsigned char bufferType;
    bool enableDepthStencil;
} pixelformatdesc_t;

typedef struct _graphics
{
    pixelformatdesc_t desc;
} graphics_t;

bool DestroyGraphics(graphics_t* pgraphics);
bool AcquireGraphics(graphics_t* pgraphics, pixelformatdesc_t* pdesc);


#endif // #ifndef _SOFT_H_