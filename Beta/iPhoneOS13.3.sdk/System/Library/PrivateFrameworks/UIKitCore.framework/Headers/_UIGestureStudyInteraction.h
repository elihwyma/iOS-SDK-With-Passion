/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIView, _UIGestureStudyPressDurationGestureRecognizer;

@interface _UIGestureStudyInteraction : NSObject <Swift>

{
    UIView *_view;
    _UIGestureStudyPressDurationGestureRecognizer *_pressDurationRecognizer;
    double _durationWhenMovementExceeded;
}

@property (retain, nonatomic) _UIGestureStudyPressDurationGestureRecognizer *pressDurationRecognizer;
@property (nonatomic) double durationWhenMovementExceeded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) UIView *view;

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)_handlePressRecognizer:(id)arg1;
- (void)_reportEventForTriggeredRecognizer:(id)arg1;
- (id)_eventDataForTriggeredRecognizer:(id)arg1;
- (id)_viewDescription;
- (id)_locationForTriggeredRecognizer:(id)arg1;

@end
