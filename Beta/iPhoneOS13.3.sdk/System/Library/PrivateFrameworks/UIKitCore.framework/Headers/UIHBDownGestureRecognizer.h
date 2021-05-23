/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableSet, NSSet, UIDelayedAction;

@interface UIHBDownGestureRecognizer : UIGestureRecognizer

{
    UIDelayedAction *_delayedAction;
    NSMutableSet *_currentlyPressedTypes;
    NSSet *_requiredPressTypes;
    double _maximumIntervalBetweenPresses;
}

@property (nonatomic) double maximumIntervalBetweenPresses;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setAllowedPressTypes:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (void)_succeed;
- (void)_fail;
- (void)_processPresses:(id)arg1;
- (_Bool)_allRequiredButtonsDown;

@end
