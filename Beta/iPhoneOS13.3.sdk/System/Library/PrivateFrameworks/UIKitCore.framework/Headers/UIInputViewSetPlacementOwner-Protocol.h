/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIInputViewSet, UIInputViewSetPlacement, UIView;

@protocol UIInputViewSetPlacementApplicator;

@protocol UIInputViewSetPlacementOwner <Swift>

@property (readonly) _Bool keyboardController;
@property (retain, readonly) UIInputViewSetPlacement *placement;
@property (retain, nonatomic, readonly) id <UIInputViewSetPlacementApplicator> applicator;
@property (retain, readonly) UIInputViewSet *inputViewSet;
@property (retain, readonly) UIView *hostView;
@property (retain, readonly) UIView *containerView;
@property _Bool hideInputViewBackdrops;
@property (readonly) long long inputViewBackdropStyle;

@end
