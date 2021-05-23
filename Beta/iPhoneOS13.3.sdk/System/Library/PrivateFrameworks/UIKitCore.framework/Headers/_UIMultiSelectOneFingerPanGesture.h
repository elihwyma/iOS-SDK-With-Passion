/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPanGestureRecognizer.h>

@class UIEvent, UITouch;

@protocol _UIMultiSelectOneFingerPanGestureDelegate;

__attribute__((visibility("hidden")))
@interface _UIMultiSelectOneFingerPanGesture : UIPanGestureRecognizer

{
    UITouch *_activeTouch;
    UIEvent *_activeEvent;
    id <_UIMultiSelectOneFingerPanGestureDelegate> _oneFingerPanDelegate;
}

@property (nonatomic, readonly) UITouch *activeTouch;
@property (nonatomic, readonly) UIEvent *activeEvent;
@property (weak, nonatomic) id <_UIMultiSelectOneFingerPanGestureDelegate> oneFingerPanDelegate;

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)_preventsDragInteractionGestures;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (_Bool)_affectedByGesture:(id)arg1;

@end
