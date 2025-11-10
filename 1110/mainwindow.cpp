#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 建立按鈕
    QPushButton *button = new QPushButton("按鈕", this);

    // 建立垂直布局，放到 centralwidget
    QVBoxLayout *layout = new QVBoxLayout(ui->centralwidget);

    // 上下拉伸 + 水平置中
    layout->addStretch();
    layout->addWidget(button, 0, Qt::AlignHCenter);
    layout->addStretch();
}

MainWindow::~MainWindow()
{
    delete ui;
}
