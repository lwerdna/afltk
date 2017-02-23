#pragma once

#include <string>
#include <vector>
using namespace std;

#include <FL/Fl_Widget.H>

typedef void (*ChessBoard_callback)(void);

class ChessBoard : public Fl_Widget {
	bool shiftHeld = false;
	int selRank=0, selFile=0;
	string remainder; // second half of fen (after piece info)

    public:
    ChessBoard(int X, int Y, int W, int H, const char *label=0);
  
    void callbackSet(ChessBoard_callback cb);
    void callbackClear(void);
	void callbackCall(void);

	/* fen stuff */
	char boardArray[8][8];
	void fenSet(const char *fen);
	void fenGet(string& fen);

	/* draw helpers, function */
	void xyToRankFile(int xPix, int yPix, int& rank, int& file);
	void draw(void);

	/* event handler */
	int handle(int event);

    /* callback */
    ChessBoard_callback callback=NULL;
};
