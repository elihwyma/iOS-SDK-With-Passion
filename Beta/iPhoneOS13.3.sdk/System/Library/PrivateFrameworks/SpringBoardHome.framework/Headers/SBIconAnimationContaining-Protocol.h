/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/Swift-Protocol.h>

@class UIView, UIWindow;

@protocol SBIconAnimationContaining <Swift>

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) UIWindow *animationWindow;
@property (nonatomic, readonly) UIView *fallbackIconContainerView;

@end
