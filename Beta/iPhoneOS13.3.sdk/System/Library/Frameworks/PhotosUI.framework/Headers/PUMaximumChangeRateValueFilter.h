/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUDynamicValueFilter.h>

@interface PUMaximumChangeRateValueFilter : PUDynamicValueFilter

{
    double _maximumChangeRate;
}

@property (nonatomic) double maximumChangeRate;

- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2 timeInterval:(double)arg3;

@end
