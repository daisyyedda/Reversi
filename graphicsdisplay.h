#ifndef GRAPHICSDISPLAY_H
#define GRAPHICSDISPLAY_H
#include "observer.h"
#include "state.h"
#include "cell.h"
#include "window.h"
#include "info.h"
class Cell;

class GraphicsDisplay: public Observer<Info, State> {
  const int gridSize, winSize;
  const int interval = 5;
  const int side = 40;
  const int size = 45;
  Xwindow xw;

 public:
  GraphicsDisplay(int gridSize, int winSize);

  void notify(Subject<Info, State> &whoNotified) override;
};

#endif
