/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class NSString, NSUUID, SBAppLayout;

@protocol SBGestureRecognizerTouchHistoryProviding;

@interface SBGestureSwitcherModifierEvent : SBSwitcherModifierEvent

{
    _Bool _canceled;
    NSUUID *_gestureID;
    SBAppLayout *_selectedAppLayout;
    long long _gestureType;
    unsigned long long _phase;
    double _lastTouchTimestamp;
    double _hysteresis;
    id <SBGestureRecognizerTouchHistoryProviding> _touchHistoryProvider;
    struct CGPoint _locationInContainerView;
    struct CGPoint _translationInContainerView;
    struct CGPoint _velocityInContainerView;
}

@property (nonatomic) unsigned long long phase;
@property (nonatomic, getter=isCanceled) _Bool canceled;
@property (nonatomic) double lastTouchTimestamp;
@property (nonatomic) struct CGPoint locationInContainerView;
@property (nonatomic) struct CGPoint translationInContainerView;
@property (nonatomic) struct CGPoint velocityInContainerView;
@property (nonatomic) double hysteresis;
@property (retain, nonatomic) id <SBGestureRecognizerTouchHistoryProviding> touchHistoryProvider;
@property (nonatomic, readonly) NSUUID *gestureID;
@property (nonatomic, readonly) SBAppLayout *selectedAppLayout;
@property (nonatomic, readonly) long long gestureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (double)peakSpeed;
- (struct CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 gestureType:(long long)arg3 phase:(unsigned long long)arg4;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (_Bool)isGestureEvent;

@end
