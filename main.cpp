#include "IntegratePointCloud.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IntegratePointCloud w;
    w.show();
    return a.exec();
}
