#ifndef WINDOW_H
#define WINDOW_H
#include<QWidget>
#include<QtWidgets>
#include "view.h"

class Window:public QWidget
{
public:
    Window();
private:
    View* view;
    QHBoxLayout* mainLayout;
};

#endif // WINDOW_H
