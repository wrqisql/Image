#ifndef QHUIDUBIANHUAN_H
#define QHUIDUBIANHUAN_H

#include <QImage>

class QHuiDuBianHuan
{
public:

    QHuiDuBianHuan();

    /*
     * 彩色转灰度
    */
    void ColorToGray(QImage RgbImage, QImage &GrayImage);

    /*
     * 灰度转彩色
    */
    void GrayToColor(QImage GrayImage, QImage &RgbImage);


    void ReverseImage(QImage RgbImage, QImage &RgbImageOut);


};

#endif // QHUIDUBIANHUAN_H
