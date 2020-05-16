#ifndef __MyUtilities_h__
#define __MyUtilities_h__

#include <TColor.h>

/**
 * MakeLabel writes a label on your plot.
 * x: x-coordinate for where to write the text, 0 = left edge of plot, 1 = right edge of plot
 * y: y-coordinate for where to write the text, 0 = bottom edge of plot, 1 = top edge of plot
 * color: what color the text should be
 * text: what text to put on your plot
 * textsize: how big the text should be relative to plot size
 */
void MakeLabel (double x, double y, Color_t color, const char* text, double textsize);

#endif
