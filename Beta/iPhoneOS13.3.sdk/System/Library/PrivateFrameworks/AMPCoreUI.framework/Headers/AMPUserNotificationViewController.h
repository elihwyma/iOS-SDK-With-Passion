/*
 Image: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
 */

#import <UIKit/UIViewController.h>

@class AMPUserNotificationContentViewController, NSString, UIColor;

@protocol AMSURLBagContract;

@interface AMPUserNotificationViewController : UIViewController

{
    id <AMSURLBagContract> _bagContract;
    AMPUserNotificationContentViewController *_contentViewController;
}

@property (retain, nonatomic) AMPUserNotificationContentViewController *contentViewController;
@property (retain, nonatomic) id <AMSURLBagContract> bagContract;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long mediaPlayPauseButtonType;
@property (nonatomic, readonly) struct CGRect mediaPlayPauseButtonFrame;
@property (copy, nonatomic, readonly) UIColor *mediaPlayPauseButtonTintColor;

+ (id)userNotificationFromNotification:(id)arg1;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)didReceiveNotification:(id)arg1;
- (void)didReceiveNotificationResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)viewController:(id)arg1 didUpdatePreferredContentSize:(struct CGSize)arg2;
- (void)openNotification;
- (void)renderUserNotification:(id)arg1;

@end
