//
// Created by Sebastian Molina on 4/5/17.
//

#ifndef NETOP_FINAL_VISIONFILTERS_H
#define NETOP_FINAL_VISIONFILTERS_H

#include "VisionInfo.h"

int hsvFilter(ImageInfo* info);
int rgbFilter(ImageInfo* info);
int findContours(ImageInfo* info);

#endif //NETOP_FINAL_VISIONFILTERS_H
