/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <UIAccessibility/Swift-Protocol.h>

@class NSArray, UIView;

@protocol UIFocusEnvironment, UIFocusItemContainer;

@protocol UIFocusEnvironment <Swift>

@property (copy, nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (weak, nonatomic, readonly) id <UIFocusEnvironment> parentFocusEnvironment;
@property (nonatomic, readonly) id <UIFocusItemContainer> focusItemContainer;
@property (weak, nonatomic, readonly) UIView *preferredFocusedView;

- (unsigned short)setNeedsFocusUpdate;
- (unsigned short)updateFocusIfNeeded;
- (unsigned short)shouldUpdateFocusInContext: /* Error: Ran out of types for this method. */;
- (unsigned short)didUpdateFocusInContext:withAnimationCoordinator: /* Error: Ran out of types for this method. */;

@end
