<<<<<<< Updated upstream
=======
#include <QApplication>
#include <QMainWindow>
#include <QMdiArea>
#include <QMdiSubWindow>
>>>>>>> Stashed changes
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
<<<<<<< Updated upstream
    MainWindow w;
    w.show();
=======

    QMainWindow mainWin;
    mainWin.setWindowTitle("兩個視窗水平排列");

    QMdiArea *mdi = new QMdiArea;
    mainWin.setCentralWidget(mdi);

    MainWindow *w1 = new MainWindow;
    MainWindow *w2 = new MainWindow;

    QMdiSubWindow *sub1 = mdi->addSubWindow(w1);
    QMdiSubWindow *sub2 = mdi->addSubWindow(w2);

    sub1->show();
    sub2->show();

    mdi->tileSubWindows(); // 自動排列水平或垂直

    mainWin.show();

>>>>>>> Stashed changes
    return a.exec();
    //test
}
