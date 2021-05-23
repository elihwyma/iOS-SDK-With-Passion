/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class UIView, UIWindow;

@protocol SBIconAnimationContaining <Swift>

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) UIWindow *animationWindow;
@property (nonatomic, readonly) UIView *fallbackIconContainerView;

@end
