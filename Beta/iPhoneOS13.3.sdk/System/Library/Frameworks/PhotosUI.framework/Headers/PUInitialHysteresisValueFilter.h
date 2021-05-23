/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUValueFilter.h>

@interface PUInitialHysteresisValueFilter : PUValueFilter

{
    _Bool _didReachThreshold;
    double _initialHysteresis;
    double _thresholdValue;
}

@property (nonatomic) double thresholdValue;
@property (nonatomic, readonly) double outputValueDerivative;

- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
