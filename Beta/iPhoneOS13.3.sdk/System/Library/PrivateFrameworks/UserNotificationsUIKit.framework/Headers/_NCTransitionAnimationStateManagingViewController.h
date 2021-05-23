/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIViewController.h>

@interface _NCTransitionAnimationStateManagingViewController : UIViewController

{
    long long _ncTransitionAnimationState;
}

- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setNCTransitionAnimationState:(long long)arg1;
- (long long)ncTransitionAnimationState;

@end
