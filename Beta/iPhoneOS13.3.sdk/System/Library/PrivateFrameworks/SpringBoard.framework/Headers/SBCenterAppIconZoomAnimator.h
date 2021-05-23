/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardHome/SBCenterIconZoomAnimator.h>

@class NSMutableArray, SBHCenterAppZoomSettings, SBReversibleLayerPropertyAnimator, UIView;

@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator

{
    UIView *_appView;
    UIView *_appZoomView;
    struct CGRect _destinationFrame;
    unsigned char _testCompletionCount;
    double _distantScale;
    SBReversibleLayerPropertyAnimator *_appZoomAnimator;
    NSMutableArray *_animationCompletions;
}

@property (retain, nonatomic) SBReversibleLayerPropertyAnimator *appZoomAnimator;
@property (retain, nonatomic) NSMutableArray *animationCompletions;
@property (retain, nonatomic) SBHCenterAppZoomSettings *settings;
@property double distantScale;

- (struct CGPoint)cameraPosition;
- (void)_delayedForRotation;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_cleanupAnimation;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (void)hintToFraction:(double)arg1;
- (double)_iconZoomDelay;
- (id)initWithFolderController:(id)arg1 appView:(id)arg2;
- (void)_zoomAppForZoomFraction:(double)arg1;
- (void)_translateAppForZoomFraction:(double)arg1;
- (void)_fadeAppForZoomFraction:(double)arg1;
- (double)_appZoomDelay;
- (double)_appZPositionForZoomFraction:(double)arg1;

@end
