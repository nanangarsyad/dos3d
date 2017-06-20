#ifndef FILLERS_H
#define FILLERS_H

#include "src/graphics.h"
#include "src/math.h"
#include "src/triangle.h"

/*
 * Triangle color fillers.
 */

#ifdef __cplusplus
extern "C" {
#endif

    // flat color fill
    void gfx_flatFill(const gfx_Triangle *t, gfx_drawBuffer *buffer, enum TriangleType type);

    // texture mapping
    void gfx_perspectiveTextureMap(const gfx_Triangle *t, gfx_drawBuffer *buffer, enum TriangleType type);
    void gfx_affineTextureMap(const gfx_Triangle *t, gfx_drawBuffer *buffer, enum TriangleType type);

#ifdef __cplusplus
}
#endif
#endif