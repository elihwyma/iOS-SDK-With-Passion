/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <UIKit/UIPanGestureRecognizer.h>

@class NSSet;

@interface CCUIDismissalGestureRecognizer : UIPanGestureRecognizer

{
    _Bool _triggered;
    NSSet *_currentTouches;
}

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)_tryToCancelTouches;
- (void)_cancelOtherGestureRecognizersForTouches:(id)arg1;

@end
