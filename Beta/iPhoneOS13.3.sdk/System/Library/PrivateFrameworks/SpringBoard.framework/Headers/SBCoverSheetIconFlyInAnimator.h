/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardHome/SBCenterIconZoomAnimator.h>

#import <SpringBoard/Swift-Protocol.h>

@class CAMediaTimingFunction, NSString, UIViewFloatAnimatableProperty;

@interface SBCoverSheetIconFlyInAnimator : SBCenterIconZoomAnimator <Swift>

{
    double _baselineDistance;
    double _effectMultiplier;
    double _distanceExponent;
    UIViewFloatAnimatableProperty *_labelAlphaDrivingProgressAnimatableProperty;
    CAMediaTimingFunction *_timingFunction;
}

@property (retain, nonatomic) UIViewFloatAnimatableProperty *labelAlphaDrivingProgressAnimatableProperty;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1 withCenter:(struct CGPoint)arg2;
- (double)_zPositionForView:(id)arg1 center:(struct CGPoint)arg2 andFraction:(double)arg3;
- (void)_updateDockForFraction:(double)arg1;
- (id)initWithFolderController:(id)arg1;
- (void)_updateWithSettings:(id)arg1;
- (void)_createAnimatableProperties;
- (double)_zPositionForPoint:(struct CGPoint)arg1 center:(struct CGPoint)arg2 andFraction:(double)arg3;
- (double)_functionWithProgress:(double)arg1 distance:(double)arg2;
- (void)_updateLabelAlphaForPresentationValue:(_Bool)arg1;
- (double)_labelAlphaForFraction:(double)arg1;

@end
