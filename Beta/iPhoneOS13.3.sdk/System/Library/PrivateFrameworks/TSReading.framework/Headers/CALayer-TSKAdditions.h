/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <QuartzCore/CALayer.h>

@interface CALayer (TSKAdditions)

@property (nonatomic, readonly) struct CGPoint center;

- (void)pause;
- (void)resume;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)zoomDownAnimation;
- (void)pauseAtTime:(double)arg1;
- (void)resumeAtTime:(double)arg1;
- (void)makeStretchableLayerWithImage:(struct CGImage *)arg1 leftCap:(double)arg2 rightCap:(double)arg3 topCap:(double)arg4 bottomCap:(double)arg5;
- (void)makeStretchableLayerWithoutImage:(struct CGImage *)arg1 leftCap:(double)arg2 rightCap:(double)arg3 topCap:(double)arg4 bottomCap:(double)arg5;
- (void)makeStretchableLayerWithUIImage:(id)arg1 leftCap:(double)arg2 rightCap:(double)arg3 topCap:(double)arg4 bottomCap:(double)arg5;
- (void)makeStretchableLayerWithImage:(struct CGImage *)arg1 leftCap:(double)arg2 topCap:(double)arg3;
- (void)makeStretchableLayerWithoutImage:(struct CGImage *)arg1 leftCap:(double)arg2 topCap:(double)arg3;
- (void)makeStretchableLayerWithUIImage:(id)arg1 leftCap:(double)arg2 topCap:(double)arg3;
- (void)setNeedsLayoutForTilingLayers;
- (void)tilingSafeSetSublayers:(id)arg1;
- (void)setIfDifferentFrame:(struct CGRect)arg1 orTransform:(struct CGAffineTransform)arg2;
- (_Bool)tilingSafeHasContents;
- (struct CGImage *)newRasterizedImageRef;
- (double)p_perspectiveZDistanceUsingSize:(struct CGSize)arg1;
- (void)removeAllAnimationsOnLayerTree;
- (void)addJiggleAnimationWithDuration:(double)arg1 angle:(double)arg2;
- (void)removeJiggleAnimation;
- (void)addWaveAnimationWithOffset:(struct CGSize)arg1 zPosition:(double)arg2;
- (void)addWaveAnimationWithScale:(double)arg1 offset:(struct CGSize)arg2 zPosition:(double)arg3;
- (void)addWaveAnimationWithScale:(double)arg1 offset:(struct CGSize)arg2 zPosition:(double)arg3 addPerspectiveProjection:(_Bool)arg4;
- (void)removeWaveAnimation;
- (void)addPerspectiveProjection;
- (void)removeWaveAnimationAnimated:(_Bool)arg1;
- (void)removeDragRotationAnimation;
- (void)removeFlipTransitionAnimation;
- (void)removeSproingAnimation;
- (void)removePopInAnimation;
- (void)removePopOutAnimation;
- (void)removeDistortAnimation;
- (void)removeRotateInAnimation;
- (void)addRippleAnimationFromPosition:(struct CGPoint)arg1 withScale:(double)arg2;
- (void)addRippleAnimationFromPosition:(struct CGPoint)arg1 withScale:(double)arg2 addPerspectiveProjection:(_Bool)arg3;
- (void)removeRippleAnimation;
- (void)addResetAnimationWithDelegate:(id)arg1;
- (void)addZoomAnimationFromPoint:(struct CGPoint)arg1 startingScale:(double)arg2;
- (void)removeZoomAnimation;
- (void)addZoomDownAnimationFromPoint:(struct CGPoint)arg1 endingScale:(double)arg2 delay:(double)arg3;
- (void)removeZoomDownAnimation;
- (struct CGRect)frameIncludingSublayers;
- (struct CATransform3D)transformToScale:(double)arg1 aroundBoundsPoint:(struct CGPoint)arg2 afterOffset:(struct CGPoint)arg3;
- (struct CATransform3D)transformToScale:(double)arg1 aroundAnchorPoint:(struct CGPoint)arg2 afterOffset:(struct CGPoint)arg3;
- (id)layerByAddingReflectionWithHeight:(double)arg1 startOpacity:(double)arg2;
- (void)addReflectionSubLayerWithHeight:(double)arg1 startOpacity:(double)arg2;
- (void)addPerspectiveSublayerProjectionUsingScreenSize:(struct CGSize)arg1;
- (double)durationOfAllAnimations;
- (struct CATransform3D)transform3DByApplyingAnimation:(id)arg1 atTime:(double)arg2 offset:(struct CGPoint)arg3 parentFrame:(struct CGRect)arg4 animationCache:(id)arg5;
- (double)opacityByApplyingAnimation:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (void)addJiggleAnimation;
- (void)addWaveAnimation;
- (void)addPulseAnimation;
- (void)removePulseAnimation;
- (void)addDragRotationAnimationWithDelta:(struct CGPoint)arg1;
- (void)addFlipTransitionAnimationToLayer:(id)arg1;
- (void)addSproingAnimationFromPoint:(struct CGPoint)arg1;
- (void)addPopInAnimation:(id)arg1;
- (_Bool)hasPopInAnimation;
- (void)addPopOutAnimation:(id)arg1;
- (void)addDistortAnimationWithVector:(struct CGPoint)arg1;
- (void)addRotateInAnimationWithDuration:(double)arg1 delay:(double)arg2;
- (void)addRippleAnimationFromPosition:(struct CGPoint)arg1;
- (void)addResetAnimation;
- (void)removeResetAnimation;
- (void)addZoomAnimation;
- (void)addZoomAnimationFromPoint:(struct CGPoint)arg1;
- (void)addZoomDownAnimation;
- (void)addZoomDownAnimationFromPoint:(struct CGPoint)arg1;
- (id)bakedLayer;
- (void)scale:(double)arg1 aroundBoundsPoint:(struct CGPoint)arg2 afterOffset:(struct CGPoint)arg3;
- (void)scale:(double)arg1 aroundAnchorPoint:(struct CGPoint)arg2 afterOffset:(struct CGPoint)arg3;
- (void)setTileContents:(id)arg1;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;
- (id)tileContentsLayer;
- (void)p_clearAllLayerDelegates;

@end
