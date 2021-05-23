/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIInputViewSetPlacement, UIView, UIViewController;

@protocol UIInputViewSetPlacementApplicator;

@protocol UISplitKeyboardSource <Swift>

@property (retain, nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) _Bool isChangingPlacement;
@property (nonatomic, readonly) struct CGPoint positionConstraintConstant;
@property (retain, nonatomic, readonly) UIViewController *_inputViewController;
@property (retain, nonatomic, readonly) UIInputViewSetPlacement *placement;
@property (retain, nonatomic, readonly) id <UIInputViewSetPlacementApplicator> applicator;

- (unsigned short)setInterfaceAutorotationDisabled: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareForSplitTransition;
- (unsigned short)finishSplitTransition;
- (unsigned short)constructNotificationInfoForScrollWithMode: /* Error: Ran out of types for this method. */;

@end
