// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "TesterGui.h"
#include "TesterLogic.h"

Fl_Double_Window* TesterGui::make_window() {
  { mainWindow = new Fl_Double_Window(1024, 768, "Tester");
    mainWindow->user_data((void*)(this));
    { Fl_Tabs* o = new Fl_Tabs(-1, 0, 1025, 768);
      { Fl_Group* o = new Fl_Group(0, 19, 1023, 749, "chess");
        { chessBoard = new ChessBoard(24, 44, 30, 16, "label");
          chessBoard->box(FL_NO_BOX);
          chessBoard->color(FL_BACKGROUND_COLOR);
          chessBoard->selection_color(FL_BACKGROUND_COLOR);
          chessBoard->labeltype(FL_NORMAL_LABEL);
          chessBoard->labelfont(0);
          chessBoard->labelsize(14);
          chessBoard->labelcolor(FL_FOREGROUND_COLOR);
          chessBoard->align(Fl_Align(FL_ALIGN_CENTER));
          chessBoard->when(FL_WHEN_RELEASE);
        } // ChessBoard* chessBoard
        o->end();
      } // Fl_Group* o
      { Fl_Group* o = new Fl_Group(24, 24, 15, 15, "otherWidgetsA");
        o->hide();
        o->end();
      } // Fl_Group* o
      { Fl_Group* o = new Fl_Group(24, 24, 15, 15, "otherWidgetsB");
        o->hide();
        o->end();
      } // Fl_Group* o
      o->end();
    } // Fl_Tabs* o
    mainWindow->end();
  } // Fl_Double_Window* mainWindow
  return mainWindow;
}

int main(int argc, char **argv) {
  TesterGui gui;
  Fl_Double_Window *w = gui.make_window();
  onGuiFinished(&gui, argc, argv);
  //Fl::add_idle(onIdle, &gui);
  w->end();
  w->show();
  int rc = Fl::run();
  onExit();
  return rc;
  /* fluid will insert Fl::run() here... */
  return Fl::run();
}
