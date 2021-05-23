/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBScaleIconZoomAnimator.h>

@class SBHCrossfadeZoomSettings, UIView;

@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator

{
    UIView *_crossfadeView;
    _Bool _performsTrueCrossfade;
    _Bool _masksCorners;
}

@property (retain, nonatomic) SBHCrossfadeZoomSettings *settings;
@property (nonatomic) _Bool performsTrueCrossfade;
@property (nonatomic) _Bool masksCorners;

- (void)_assertCrossfadeViewSizeIfNecessary;
- (void)_delayedForRotation;
- (void)_prepareAnimation;
- (struct CGPoint)_zoomedIconCenter;
- (struct CGRect)_zoomedFrame;
- (void)_setAnimationFraction:(double)arg1;
- (double)_appSnapshotCornerRadiusForFraction:(double)arg1;
- (void)_cleanupZoom;
- (void)_cleanupAnimation;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 icon:(id)arg3;
- (double)maxHomeScreenZoomScale;
- (_Bool)fadesHomeScreen;

@end
