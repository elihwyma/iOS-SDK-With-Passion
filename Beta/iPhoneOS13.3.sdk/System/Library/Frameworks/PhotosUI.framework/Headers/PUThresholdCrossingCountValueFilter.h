/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUValueFilter.h>

@interface PUThresholdCrossingCountValueFilter : PUValueFilter

{
    long long _crossingCount;
    double _thresholdValue;
    long long _maximumCrossingCount;
}

@property (nonatomic) double thresholdValue;
@property (nonatomic) long long maximumCrossingCount;

- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
