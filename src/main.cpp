#include <iostream>
#include <opencv2/opencv.hpp>
#include "../include/VisionInfo.h"
#include "../include/VisionFilters.h"
using namespace std;
using namespace cv;


int main()
{
    VideoCapture cap(0);
    Mat frame;

    ImageInfo* info;

    while(1)
    {
        info = new ImageInfo;
        cap >> frame;
        info->frame = frame;
        hsvFilter(info);
        findContours(info);
        imshow("Test", info->frame);
        delete info;
    }
}