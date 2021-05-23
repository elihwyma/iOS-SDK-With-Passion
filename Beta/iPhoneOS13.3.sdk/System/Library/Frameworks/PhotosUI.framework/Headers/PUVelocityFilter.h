/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUDynamicValueFilter.h>

@interface PUVelocityFilter : PUDynamicValueFilter

{
    double _lastValue;
    double _lastTime;
    double _velocity;
    double _previousVelocity;
    double _filteredVelocity;
    double __minimumSampleInterval;
    double __previousVelocityWeight;
}

@property (nonatomic, setter=_setMinimumSampleInterval:) double _minimumSampleInterval;
@property (nonatomic, setter=_setPreviousVelocityWeight:) double _previousVelocityWeight;

+ (id)gestureVelocityFilter;

- (id)init;
- (void)setInputValue:(double)arg1;
- (double)outputValue;

@end
