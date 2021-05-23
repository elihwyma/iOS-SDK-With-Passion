/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <AssetViewer/Swift-Protocol.h>

@protocol ASVTwoFingerGestureDelegate <Swift>

@property (nonatomic, readonly) float minimumObjectScale;
@property (nonatomic, readonly) float maximumObjectScale;

- (unsigned short)gesture:rotatedAssetByDeltaYaw: /* Error: Ran out of types for this method. */;
- (unsigned short)gestureBeganScaling: /* Error: Ran out of types for this method. */;
- (unsigned short)gesture:scaledAssetToScale: /* Error: Ran out of types for this method. */;
- (unsigned short)gestureEndedScaling: /* Error: Ran out of types for this method. */;
- (unsigned short)gestureDidSnapToScale: /* Error: Ran out of types for this method. */;
- (unsigned short)gestureDidSnapAwayFromScale: /* Error: Ran out of types for this method. */;
- (unsigned short)gestureStartScaleAnimationFrom:to: /* Error: Ran out of types for this method. */;
- (unsigned short)gestureStopScaleAnimation;

@end
