/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UserNotificationsUIKit/NCNotificationManagementContentProvider.h>

@class NSString;

@protocol NCNotificationManagementSuggestionDelegate;

@interface NCNotificationManagementSuggestionContentProvider : NCNotificationManagementContentProvider

{
    _Bool _auxiliaryOptionsVisible;
    NSString *_optionsSummaryText;
    unsigned long long _numberOfOptionButtons;
    id <NCNotificationManagementSuggestionDelegate> _suggestionDelegate;
}

@property (weak, nonatomic) id <NCNotificationManagementSuggestionDelegate> suggestionDelegate;
@property (copy, nonatomic) NSString *optionsSummaryText;
@property (nonatomic) unsigned long long numberOfOptionButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *optionsSummaryTitle;
@property (nonatomic) _Bool auxiliaryOptionsVisible;

- (void)configureOptionButtons:(id)arg1;
- (void)logSuggestionResponse:(long long)arg1;
- (id)initWithNotificationRequest:(id)arg1 bundleDisplayName:(id)arg2 managementDelegate:(id)arg3 suggestionDelegate:(id)arg4;

@end
