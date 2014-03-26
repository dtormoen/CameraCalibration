#include "cameracalib.h"

#include <iostream>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <vector>

using namespace std;
using namespace cv;

CameraCalib::CameraCalib() : capture(0)
{
    if (!capture.isOpened())
    {
        cout << "There was a problem opening the camera" << endl;
    }
    namedWindow("Image Preview");
}

CameraCalib::~CameraCalib()
{
    destroyWindow("Image Preview");
}

bool CameraCalib::update()
{
    capture.read(currentImage);
    imshow("Image Preview", currentImage);
    char key = waitKey(20);

    if (key == 27) //escape key
        return false;
    else if (key == ' ')
    {
        cout << "Capturing image " << calibImages.size() + 1 << "!" << endl;
        calibImages.push_back(currentImage);
    }

    return true;
}

void CameraCalib::calibrate()
{

}

void CameraCalib::run()
{
    while(update())
    {}
    if (calibImages.size() > 0)
    {
        calibrate();
    }
}
