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
    void calibrate();
private:
    std::vector<cv::Mat> calibImages;
    cv::VideoCapture capture;
};

#endif // CAMERACALIB_H
