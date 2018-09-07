#include "HuiDuBianHuan.h"


QHuiDuBianHuan::QHuiDuBianHuan()
{

}

/******************************************************************************
*函数名称:
*函数输入:
*函数输出:
*返 回 值:
*函数说明:
*******************************************************************************/
void QHuiDuBianHuan::ColorToGray(QImage RgbImage, QImage &GrayImage)
{
    int w, h;

    w = RgbImage.width();

    h = RgbImage.height();

    GrayImage = QImage(w,h,QImage::Format_RGB32);

    for(int i = 0; i < h; i++)
    {
        for(int j = 0;j < w; j++)
        {
            QRgb pixel = RgbImage.pixel(i,j);

            int gray = qGray(pixel);

            QRgb grayPixel = qRgb(gray,gray,gray);

            GrayImage.setPixel(i, j, grayPixel);
        }
    }
}

/******************************************************************************
*函数名称:
*函数输入:
*函数输出:
*返 回 值:
*函数说明:
*******************************************************************************/
void QHuiDuBianHuan::GrayToColor(QImage GrayImage, QImage &RgbImage)
{
    int w, h;

    w = GrayImage.width();

    h = GrayImage.height();

    RgbImage = QImage(w,h,QImage::Format_RGB32);

    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {

        }
    }
}


/******************************************************************************
*函数名称:
*函数输入:
*函数输出:
*返 回 值:
*函数说明:
*******************************************************************************/
void QHuiDuBianHuan::ReverseImage(QImage RgbImage, QImage &RgbImageOut)
{
    int w, h;

    w = RgbImage.width();

    h = RgbImage.height();

    RgbImageOut = QImage(w,h,QImage::Format_RGB32);

    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            QRgb pixel = RgbImage.pixel(i,j);

            QRgb pixelOut = qRgb(255 - qRed(pixel), 255 - qGreen(pixel), 255 - qBlue(pixel) );

            RgbImageOut.setPixel(i, j, pixelOut);

        }
    }

}


