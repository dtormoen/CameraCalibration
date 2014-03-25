#include "cameracalib.h"

CameraCalib::CameraCalib() : capture(0)
{
}

bool CameraCalib::update()
{
    return true;
}

void CameraCalib::run()
{
    while(update())
    { }
}
