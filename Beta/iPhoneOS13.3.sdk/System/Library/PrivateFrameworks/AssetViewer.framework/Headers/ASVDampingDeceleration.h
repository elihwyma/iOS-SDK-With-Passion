/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <AssetViewer/ASVDeceleration.h>

@interface ASVDampingDeceleration : ASVDeceleration

{
    float _decelerationRate;
}

@property (nonatomic) float decelerationRate;

- (float)decelerationDelta;
- (id)initWithVelocity:(float)arg1 minEndDelta:(float)arg2 decelerationRate:(float)arg3;

@end
