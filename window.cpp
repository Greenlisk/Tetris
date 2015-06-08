#include "window.h"

Window::Window()
{
    view = new View();
    mainLayout = new QHBoxLayout();
    mainLayout->addWidget(view);
    setLayout(mainLayout);
}
