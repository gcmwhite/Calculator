#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    a.setWindowIcon(QIcon(":/images/Calculator_96px.ico"));
    Widget w;
    w.show();

    return a.exec();
}
