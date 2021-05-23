/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXNumberFilter.h>

@interface PXVelocityNumberFilter : PXNumberFilter

{
    double _minimumSampleInterval;
    double _previousVelocityWeight;
    double _lastValue;
    double _lastTime;
    double _velocity;
    double _previousVelocity;
    double _filteredVelocity;
}

+ (id)gestureVelocityFilter;

- (id)initWithInput:(double)arg1;
- (double)updatedOutput;

@end
