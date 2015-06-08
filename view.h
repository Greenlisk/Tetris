#ifndef VIEW_H
#define VIEW_H
#include<QGLWidget>


class View : public QGLWidget
{
    Q_OBJECT

public:
    View(QWidget* parent = 0);
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);
    QSize minimumSizeHint() const;
    //void mousePressEvent(QMouseEvent *event);
    //void mouseMoveEvent(QMouseEvent *event);

};

#endif // VIEW_H
