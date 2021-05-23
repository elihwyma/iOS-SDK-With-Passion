/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <AssetViewer/ASVDeceleration.h>

@interface ASVSnapDeceleration : ASVDeceleration

{
    float _currentOffset;
    float _minOffset;
    float _maxOffset;
}

@property (nonatomic) float currentOffset;
@property (nonatomic) float minOffset;
@property (nonatomic) float maxOffset;

- (void)calculateSnapFromStartingOffset:(float)arg1 startingVelocity:(float)arg2 deltaTime:(float)arg3 outOffset:(float *)arg4 outVelocity:(float *)arg5;
- (id)initWithVelocity:(float)arg1 minEndDelta:(float)arg2 startingOffset:(float)arg3 minOffset:(float)arg4 maxOffset:(float)arg5;
- (float)decelerationDelta;

@end
