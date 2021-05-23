/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKHostedViewController.h>

@class NSObject, NSString, UIViewController;

@protocol GKFriendRequestViewControllerDelegate;

@interface GKFriendRequestViewController : GKHostedViewController

{
    NSObject<GKFriendRequestViewControllerDelegate> *_delegate;
    NSString *_friendCode;
    NSString *_friendSupportPageURL;
    UIViewController *_requestingViewController;
}

@property (weak, nonatomic) UIViewController *requestingViewController;
@property (weak, nonatomic) NSObject<GKFriendRequestViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSString *friendCode;
@property (retain, nonatomic) NSString *friendSupportPageURL;

+ (void)addFriends:(id)arg1;
+ (void)presentFriendRequestOn:(id)arg1 withFriendCode:(id)arg2 andFriendSupportPageURL:(id)arg3;
+ (void)presentAlertControllerOn:(id)arg1 withMessage:(id)arg2 andTitle:(id)arg3;

- (id)init;
- (id)_presentingViewController;
- (void)notifyDelegateOnWillFinish;
- (id)serviceSideViewControllerClassName;

@end
