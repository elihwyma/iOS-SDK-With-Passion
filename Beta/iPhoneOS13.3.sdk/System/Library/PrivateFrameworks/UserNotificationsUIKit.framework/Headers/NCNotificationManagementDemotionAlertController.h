/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UserNotificationsUIKit/NCNotificationManagementAlertController.h>

@interface NCNotificationManagementDemotionAlertController : NCNotificationManagementAlertController

{
    _Bool _includeExplanation;
}

@property (nonatomic) _Bool includeExplanation;

- (id)initWithRequest:(id)arg1 withPresentingView:(id)arg2 settingsDelegate:(id)arg3 includeExplanation:(_Bool)arg4;
- (void)_configureView;

@end
