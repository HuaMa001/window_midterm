#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 建立一個容器 widget
    QWidget container;
    container.setWindowTitle("兩個視窗水平排列");

    // 建立水平布局
    QHBoxLayout *layout = new QHBoxLayout(&container);

    // 建立兩個 MainWindow 指針
    MainWindow *w1 = new MainWindow();
    MainWindow *w2 = new MainWindow();

    // 將兩個視窗加入布局
    layout->addWidget(w1);
    layout->addWidget(w2);

    // 顯示容器
    container.show();

    return a.exec();
}
