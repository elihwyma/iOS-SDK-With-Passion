/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface _UITouchesObservingGestureRecognizer : UIGestureRecognizer

{
    NSSet *_touches;
}

@property (copy, nonatomic) NSSet *touches;

+ (_Bool)_shouldDefaultToTouches;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)_affectedByGesture:(id)arg1;
- (_Bool)_wantsPartialTouchSequences;
- (void)_updateTouchesFromEvent:(id)arg1;
- (_Bool)_allTouchesAreEndedOrCancelled:(id)arg1;

@end
