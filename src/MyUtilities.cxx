#ifndef __MyUtilities_cxx__
#define __MyUtilities_cxx__

#include <TLatex.h>

void MakeLabel (double x, double y, Color_t color, const char *text, double textsize) {
  TLatex l; // a TLatex object allows you to write text and LaTeX on a plot
  l.SetTextSize (textsize);
  l.SetNDC ();
  l.SetTextColor (color);
  l.DrawLatex (x, y, text);
}

#endif
