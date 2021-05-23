/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSelectionDelayGestureRecognizer : UIGestureRecognizer

{
    UIDelayedAction *_delayedAction;
}

@property (nonatomic, readonly) UIDelayedAction *delayedAction;

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_timerSatisfied;

@end
