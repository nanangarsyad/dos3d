#include "src/graphics.h"
#include "src/math.h"

#include <sys/timeb.h>

// Bresenham line drawing test
void testBresenham(int ox, int oy, int r)
{
    float l;
    unsigned int elapsed, numLines = 0;
    struct timeb startTime, endTime;

    printf("Bresenham drawing: please wait...\r");

    ftime(&startTime);
    for(l = 0.0f; l < 2.0f*M_PI; l += 0.001f, numLines++)
    {
        int color = (int)((l * 10.f) + 1) % 256;
        drawLine(ox, oy, ox + r * cos(l), oy + r * sin(l), color, NULL);
    }
    ftime(&endTime);

    elapsed = (endTime.time - startTime.time)*1000 + endTime.millitm - startTime.millitm;
    printf("Bresenham drawing: %ums (%u lines)", elapsed, numLines);
}