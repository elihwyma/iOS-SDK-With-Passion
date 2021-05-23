/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIGestureRecognizer.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface AVUserInteractionObserverGestureRecognizer : UIGestureRecognizer

{
    NSMutableSet *_trackedTouches;
}

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (_Bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)_touchesEndedOrCancelled:(id)arg1;

@end
