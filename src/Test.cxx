#ifndef __Test_cxx__
#define __Test_cxx__

#include "MyUtilities.h"

#include <TCanvas.h>

int main (int argc, char** argv) {

  TCanvas* canvas = new TCanvas ("canvas", "", 600, 600);
  canvas->Draw ();

  MakeLabel (0.1, 0.2, kBlack, "Bottom left corner", 0.03);
  MakeLabel (0.7, 0.2, kBlack, "Bottom right corner", 0.03);
  MakeLabel (0.1, 0.8, kBlack, "Top left corner", 0.03);
  MakeLabel (0.7, 0.8, kBlack, "Top right corner", 0.03);

  canvas->SaveAs ("canvas.pdf");

  return 0;  
}

#endif
