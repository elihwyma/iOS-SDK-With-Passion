/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <CoreBrightness/CBFilter.h>

__attribute__((visibility("hidden")))
@interface CBSensorOverrideFilter : CBFilter

{
    CDStruct_6e3f967a _chromaticity;
    double _illuminance;
    int _orientation;
}

@property int orientation;

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)filterEvent:(id)arg1;

@end
