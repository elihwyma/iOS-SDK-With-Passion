/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIViewController.h>

@class NCNotificationRequest, NCNotificationTextInputView, NSString;

@protocol NCNotificationCustomContent, NCNotificationCustomContentDelegate;

@interface NCNotificationContentContainerViewController : UIViewController

{
    id <NCNotificationCustomContentDelegate> _delegate;
    NCNotificationRequest *_notificationRequest;
    UIViewController<NCNotificationCustomContent> *_contentViewController;
    NCNotificationTextInputView *_inputAccessoryView;
}

@property (retain, nonatomic) UIViewController<NCNotificationCustomContent> *contentViewController;
@property (retain, nonatomic) NCNotificationTextInputView *inputAccessoryView;
@property (nonatomic, readonly) NCNotificationRequest *notificationRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *title;
@property (weak, nonatomic) id <NCNotificationCustomContentDelegate> delegate;
@property (nonatomic, readonly) NSString *contentExtensionIdentifier;

- (_Bool)becomeFirstResponder;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)userInteractionEnabled;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (id)initWithNotificationRequest:(id)arg1;
- (_Bool)didReceiveNotificationRequest:(id)arg1;
- (void)preserveInputViews;
- (_Bool)restoreInputViews;
- (_Bool)performAction:(id)arg1 forNotification:(id)arg2;
- (void)customContent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4;
- (void)customContentRequestsDefaultAction:(id)arg1;
- (void)customContentRequestsDismiss:(id)arg1;
- (void)customContentDidLoadExtension:(id)arg1;
- (void)customContentDidUpdateTitle:(id)arg1;
- (void)customContent:(id)arg1 didUpdateUserNotificationActions:(id)arg2;
- (unsigned long long)customContentLocation;
- (void)_loadContentViewControllerForNotificationRequest:(id)arg1;
- (void)_setupQuickReplyForNotificationRequest:(id)arg1;
- (void)_setupContentViewController:(id)arg1;
- (void)_setupQuickReplyForNotificationAction:(id)arg1;
- (_Bool)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (_Bool)defaultContentHidden;
- (_Bool)overridesDefaultTitle;
- (void)playMedia;
- (id)cancelTouches;
- (id)_textInputActionInNotification:(id)arg1;
- (void)_removeInputAccessoryView:(id)arg1;
- (void)notificationTextInputView:(id)arg1 didConfirmText:(id)arg2 forAction:(id)arg3;
- (_Bool)allowManualDismiss;

@end
