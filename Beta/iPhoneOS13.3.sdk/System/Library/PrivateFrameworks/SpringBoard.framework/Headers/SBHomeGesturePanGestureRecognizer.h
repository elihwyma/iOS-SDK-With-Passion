/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBScreenEdgePanGestureRecognizer.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBFluidSwitcherGestureExclusionTrapezoid, SBHomeGestureSettings, SBTouchHistory, UIView;

@interface SBHomeGesturePanGestureRecognizer : SBScreenEdgePanGestureRecognizer <Swift>

{
    _Bool _preventHorizontalSwipesOutsideTrapezoid;
    _Bool _installedAsSystemGesture;
    SBHomeGestureSettings *_homeGestureSettings;
    SBFluidSwitcherGestureExclusionTrapezoid *_portraitExclusionTrapezoid;
    SBFluidSwitcherGestureExclusionTrapezoid *_landscapeExclusionTrapezoid;
    SBTouchHistory *_touchHistory;
}

@property (retain, nonatomic) SBHomeGestureSettings *homeGestureSettings;
@property (retain, nonatomic) SBFluidSwitcherGestureExclusionTrapezoid *portraitExclusionTrapezoid;
@property (retain, nonatomic) SBFluidSwitcherGestureExclusionTrapezoid *landscapeExclusionTrapezoid;
@property (retain, nonatomic) SBTouchHistory *touchHistory;
@property (nonatomic) _Bool preventHorizontalSwipesOutsideTrapezoid;
@property (nonatomic) _Bool installedAsSystemGesture;
@property (weak, nonatomic, readonly) UIView *viewForTouchHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)homeGesturePanGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (double)peakSpeed;
- (_Bool)_shouldBegin;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (void)sb_commonInitHomeGesturePanGestureRecognizer;
- (void)_updateHomeGestureParameters;
- (void)_SBLogTouchesWithMethodName:(id)arg1 withMethodName:(id)arg2;
- (_Bool)_isOutsideOfExclusionTrapezoid;
- (_Bool)_shouldBlockHomeGestureForKeyboardInputMode:(id)arg1;
- (void)_setUpExclusionTrapezoids;
- (id)_currentExclusionShapeForEdge:(unsigned long long)arg1;
- (id)_currentKeyboardExclusionCompositeShape;

@end
