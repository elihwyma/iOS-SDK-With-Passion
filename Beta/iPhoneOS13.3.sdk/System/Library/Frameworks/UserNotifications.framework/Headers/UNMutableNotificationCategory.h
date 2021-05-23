/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <UserNotifications/UNNotificationCategory.h>

@class NSArray, NSString, UNNotificationAction;

@interface UNMutableNotificationCategory : UNNotificationCategory

@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) unsigned long long listPriority;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *minimalActions;
@property (copy, nonatomic) UNNotificationAction *alternateAction;
@property (copy, nonatomic) NSArray *intentIdentifiers;
@property (copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder;
@property (copy, nonatomic) NSString *categorySummaryFormat;
@property (copy, nonatomic) NSString *actionsMenuTitle;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
