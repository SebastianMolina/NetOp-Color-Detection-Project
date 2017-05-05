//
// Created by Sebastian Molina on 4/5/17.
//

#ifndef NETOP_FINAL_VISIONINFO_H
#define NETOP_FINAL_VISIONINFO_H

#include <opencv2/opencv.hpp>
#include <iostream>
#include <iomanip>

using namespace cv;
using namespace std;

struct ImageInfo
{
    Mat frame;
    Mat mask;

    vector<vector<Point>> contours;

    Point pt1;
    Point pt2;

    /*//HSV Values Clorox Wipes
    Scalar hsv_lower = Scalar(79,193,46);
    Scalar hsv_upper = Scalar(108,255,220);

    //RGB Values Clorox Wipes
    Scalar rgb_lower = Scalar(0,69,50);
    Scalar rgb_upper = Scalar(39,142,190);*/

    //HSV Values Dixie Cup
    Scalar hsv_lower = Scalar(0,158,103);
    Scalar hsv_upper = Scalar(127,255,158);

    //RGB Values Dixie Cup
    Scalar rgb_lower = Scalar(80,11,0);
    Scalar rgb_upper = Scalar(192,112,93);

};

#endif //NETOP_FINAL_VISIONINFO_H
