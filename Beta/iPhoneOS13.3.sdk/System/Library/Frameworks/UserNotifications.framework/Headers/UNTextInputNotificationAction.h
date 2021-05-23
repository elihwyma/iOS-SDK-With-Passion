/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <UserNotifications/UNNotificationAction.h>

@class NSString;

@interface UNTextInputNotificationAction : UNNotificationAction

@property (copy, nonatomic, readonly) NSString *textInputButtonTitle;
@property (copy, nonatomic, readonly) NSString *textInputPlaceholder;

+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5;

- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
