#ifndef BRAINTRAINING_MATH_BWIDGET_H
#define BRAINTRAINING_MATH_BWIDGET_H
#include <I/bdefines.h>
#include <math/bmathgen.h>
#include <math/bmathutil.h>

class BMathGen;
class BMathExpr;

class BMathWidget : public IGameWidget {
 Q_OBJECT

	BMathExpr *expr = nullptr;

	QLabel *l_time, *l_expr;
	QLineEdit *l_edit;
 QTimer *t_time;

 int time, correct, wrong, score;

public:
	BMathWidget();

	void showNext();
 void check();
	void tick();

	virtual void pause();
	virtual void resume();
	virtual void focus();
};

#endif //BRAINTRAINING_MATH_BWIDGET_H