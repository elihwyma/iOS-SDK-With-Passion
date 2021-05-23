/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UserNotificationsUIKit/NCNotificationManagementSuggestionContentProvider.h>

@interface NCNotificationManagementPromotingSuggestionContentProvider : NCNotificationManagementSuggestionContentProvider

- (void)configureOptionButtons:(id)arg1;
- (void)logSuggestionResponse:(long long)arg1;
- (id)initWithNotificationRequest:(id)arg1 bundleDisplayName:(id)arg2 managementDelegate:(id)arg3 suggestionDelegate:(id)arg4;
- (void)handleKeepAction:(id)arg1;
- (void)handleOffAction:(id)arg1;

@end
