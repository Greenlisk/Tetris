#include "view.h"

View::View(QWidget *parent)
{
}

void View::initializeGL()
{
    qglClearColor(QColor(0, 255,0,255));
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

}
void View::paintGL()
{

}
void View::resizeGL(int width, int height)
{

}

QSize View::minimumSizeHint() const
{
    return QSize(200, 200);
}
