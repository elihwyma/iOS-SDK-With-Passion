/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBScreenEdgePanGestureRecognizer.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBAppSwitcherSettings, SBTouchHistory, UIPreviewForceInteractionProgress;

@interface SBSwitcherForcePressSystemGestureRecognizer : SBScreenEdgePanGestureRecognizer <Swift>

{
    UIPreviewForceInteractionProgress *_forceObserver;
    SBAppSwitcherSettings *_settings;
    double _forcePercent;
    SBTouchHistory *_touchHistory;
}

@property (retain, nonatomic) SBTouchHistory *touchHistory;
@property (nonatomic, readonly) double forcePercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)reset;
- (void)setState:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (double)peakSpeed;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;

@end
