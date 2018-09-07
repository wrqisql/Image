#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>
#include <QPainter>
#include <QPaintEvent>
#include "ImageProcess/HuiDuBianHuan.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

    void paintEvent(QPaintEvent *event);


private slots:

    void OnTriggeredActOpenFile();

    void OnTriggeredActSaveFile();

    void OnTriggeredActHuiZhiHua();

    void OnTriggeredActFuXiang();


private:

    Ui::MainWindow *ui;

    QImage m_QImage;

    QImage m_QImageOut;
};

#endif // MAINWINDOW_H
