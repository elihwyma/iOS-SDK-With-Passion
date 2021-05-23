/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class UIView, UIViewController;

@interface _SBBulletinRootViewControllerTransitionContext : NSObject

{
    _Bool _animated;
    _Bool _presenting;
    UIView *_containerView;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    CDUnknownBlockType _presentationCompletion;
    CDUnknownBlockType _dismissalCompletion;
}

@property (retain, nonatomic) UIView *containerView;
@property (nonatomic, getter=isAnimated) _Bool animated;
@property (nonatomic, getter=isPresenting) _Bool presenting;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) UIViewController *presentedViewController;
@property (copy, nonatomic) CDUnknownBlockType presentationCompletion;
@property (copy, nonatomic) CDUnknownBlockType dismissalCompletion;

@end
