/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class CADisplayLink, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface _UITouchDurationObservingGestureRecognizer : UIGestureRecognizer

{
    _Bool _hasExceededAllowableMovement;
    CADisplayLink *_displayLink;
    double _minimumDurationRequired;
    double _allowableMovement;
    double _touchForce;
    double _touchStartTimestamp;
    UIDelayedAction *_delayedAction;
    struct CGPoint _originalCentroid;
}

@property (nonatomic, readonly) CADisplayLink *displayLink;
@property (nonatomic) double touchStartTimestamp;
@property (nonatomic) struct CGPoint originalCentroid;
@property (nonatomic, readonly) UIDelayedAction *delayedAction;
@property (nonatomic) double minimumDurationRequired;
@property (nonatomic) double allowableMovement;
@property (nonatomic, readonly) _Bool hasExceededAllowableMovement;
@property (nonatomic, readonly) double touchDuration;
@property (nonatomic, readonly) double touchForce;

- (void)dealloc;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)_displayLinkDidFire:(id)arg1;
- (_Bool)_exceededNumberOfTouchesForEvent:(id)arg1;
- (void)_cancelOrFail;
- (void)_performDelayedBegin;

@end
