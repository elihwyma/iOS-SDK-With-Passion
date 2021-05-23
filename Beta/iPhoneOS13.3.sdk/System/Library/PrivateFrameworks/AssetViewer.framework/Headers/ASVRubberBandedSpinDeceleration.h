/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <AssetViewer/ASVDampingDeceleration.h>

@class ASVRubberBand;

@interface ASVRubberBandedSpinDeceleration : ASVDampingDeceleration

{
    float _currentOffset;
    float _previousRubberBandedOffset;
    ASVRubberBand *_rubberBand;
}

@property (nonatomic) float currentOffset;
@property (nonatomic) float previousRubberBandedOffset;
@property (retain, nonatomic) ASVRubberBand *rubberBand;

- (float)decelerationDelta;
- (id)initWithVelocity:(float)arg1 minEndDelta:(float)arg2 startingOffset:(float)arg3 decelerationRate:(float)arg4 rubberBand:(id)arg5;

@end
