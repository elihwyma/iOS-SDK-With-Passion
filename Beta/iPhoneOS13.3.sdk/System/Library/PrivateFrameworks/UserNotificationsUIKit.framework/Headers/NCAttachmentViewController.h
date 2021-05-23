/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIViewController.h>

@class NCNotificationRequest, NSString, UNNotificationAttachment;

@protocol NCNotificationCustomContentDelegate;

@interface NCAttachmentViewController : UIViewController

{
    id <NCNotificationCustomContentDelegate> _delegate;
    NCNotificationRequest *_notificationRequest;
    UNNotificationAttachment *_attachment;
}

@property (retain, nonatomic) UNNotificationAttachment *attachment;
@property (retain, nonatomic) NCNotificationRequest *notificationRequest;
@property (nonatomic, readonly) struct CGSize contentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *title;
@property (weak, nonatomic) id <NCNotificationCustomContentDelegate> delegate;
@property (nonatomic, readonly) NSString *contentExtensionIdentifier;

+ (id)attachmentViewControllerForAttachment:(id)arg1 notificationRequest:(id)arg2;

- (void)viewWillAppear:(_Bool)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (_Bool)userInteractionEnabled;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)updatePreferredContentSize;
- (_Bool)didReceiveNotificationRequest:(id)arg1;
- (_Bool)performAction:(id)arg1 forNotification:(id)arg2;
- (unsigned long long)customContentLocation;
- (_Bool)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (_Bool)defaultContentHidden;
- (_Bool)overridesDefaultTitle;
- (_Bool)allowManualDismiss;
- (id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2;
- (struct CGSize)_preferredContentSizeForContainerSize:(struct CGSize)arg1 contentSize:(struct CGSize)arg2;

@end
