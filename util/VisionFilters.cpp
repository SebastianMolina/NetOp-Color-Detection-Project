//
// Created by Sebastian Molina on 4/5/17.
//

#include "../include/VisionInfo.h"

int hsvFilter(ImageInfo* info)
{

    Mat hsv;
    cvtColor(info->frame.clone(), hsv, COLOR_BGR2HSV);

    inRange(hsv, info->hsv_lower, info->hsv_upper, info->mask);

    findContours(info->mask.clone(), info->contours, RETR_TREE, CHAIN_APPROX_TC89_KCOS, Point(0, 0));

}

int rgbFilter(ImageInfo* info)
{

    Mat rgb;
    cvtColor(info->frame.clone(), rgb, COLOR_BGR2RGB);

    inRange(rgb, info->rgb_lower, info->rgb_upper, info->mask);

    findContours(info->mask.clone(), info->contours, RETR_TREE, CHAIN_APPROX_TC89_KCOS, Point(0, 0));

}

int findContours(ImageInfo* info)
{
    Scalar lineColor = Scalar(0, 255, 0);

    int x;
    int y;
    int w;
    int h;
    int area;

    for(int i = 0; i < info->contours.size(); i++)
    {
        Rect rect = boundingRect(info->contours[i]);
        area = contourArea(info->contours[i]);
        x = rect.x;
        y = rect.y;
        w = rect.width;
        h = rect.height;

        if (area > 10000)
        {
            info->pt1 = Point(x, y);
            info->pt2 = Point(x + w, y + h);
            rectangle(info->frame, info->pt1, info->pt2, lineColor, 4);
        }
    }
}