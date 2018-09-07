#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QFileDialog>
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/******************************************************************************
*函数名称:
*函数输入:
*函数输出:
*返 回 值:
*函数说明:
*******************************************************************************/
void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.drawImage(50, 50, m_QImage);

    painter.drawImage(350, 50, m_QImageOut );
}


/******************************************************************************
*函数名称:
*函数输入:
*函数输出:
*返 回 值:
*函数说明:
*******************************************************************************/
void MainWindow::OnTriggeredActOpenFile()
{
    QString file_name = QFileDialog::getOpenFileName(this, "文件浏览", ".", "*.jpg *.jpeg");

    m_QImage = QImage(file_name).scaled(200,200) ;

    update();
}


/******************************************************************************
*函数名称:
*函数输入:
*函数输出:
*返 回 值:
*函数说明:
*******************************************************************************/
void MainWindow::OnTriggeredActSaveFile()
{

}

/******************************************************************************
*函数名称:
*函数输入:
*函数输出:
*返 回 值:
*函数说明:
*******************************************************************************/
void MainWindow::OnTriggeredActHuiZhiHua()
{
    QHuiDuBianHuan HuiDu;

    HuiDu.ColorToGray(m_QImage,  m_QImageOut);

    update();
}


/******************************************************************************
*函数名称:
*函数输入:
*函数输出:
*返 回 值:
*函数说明:
*******************************************************************************/
void MainWindow::OnTriggeredActFuXiang()
{
    QHuiDuBianHuan HuiDu;

    HuiDu.ReverseImage(m_QImage, m_QImageOut);

    update();
}
