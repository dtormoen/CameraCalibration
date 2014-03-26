#ifndef CAMERACALIB_H
#define CAMERACALIB_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <vector>

class CameraCalib
{
public:
    CameraCalib();
    ~CameraCalib();
    void run();
    bool update();
private:
    std::vector<cv::Mat> calibImages;
    cv::Mat currentImage;
    cv::VideoCapture capture;
};

#endif // CAMERACALIB_H
