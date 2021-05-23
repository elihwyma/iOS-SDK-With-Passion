/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIGestureRecognizer.h>

@protocol PXTouchingUIGestureRecognizerDelegate;

@interface PXTouchingUIGestureRecognizer : UIGestureRecognizer

{
    _Bool __willBegin;
    _Bool __didBegin;
    double _minimumTouchDuration;
    double _maximumTouchMovement;
    id <PXTouchingUIGestureRecognizerDelegate> _touchDelegate;
    unsigned long long __touchCount;
    unsigned long long __beginRequestID;
    struct CGPoint __initialPointInView;
}

@property (nonatomic, setter=_setTouchCount:) unsigned long long _touchCount;
@property (nonatomic, setter=_setBeginRequestID:) unsigned long long _beginRequestID;
@property (nonatomic, setter=_setWillBegin:) _Bool _willBegin;
@property (nonatomic, setter=_setDidBegin:) _Bool _didBegin;
@property (nonatomic, setter=_setInitialPointInView:) struct CGPoint _initialPointInView;
@property (nonatomic) double minimumTouchDuration;
@property (nonatomic) double maximumTouchMovement;
@property (weak, nonatomic) id <PXTouchingUIGestureRecognizerDelegate> touchDelegate;

- (void)setEnabled:(_Bool)arg1;
- (void)reset;
- (void)setState:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)initialLocationInView:(id)arg1;
- (void)_incrementTouchesBy:(unsigned long long)arg1;
- (void)_decrementTouchesBy:(unsigned long long)arg1;
- (void)_beginWithRequestID:(unsigned long long)arg1;

@end
