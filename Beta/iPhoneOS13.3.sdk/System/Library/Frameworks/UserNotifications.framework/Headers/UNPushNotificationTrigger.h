/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <UserNotifications/UNNotificationTrigger.h>

@interface UNPushNotificationTrigger : UNNotificationTrigger

{
    _Bool _isContentAvailable;
    _Bool _isMutableContent;
}

@property (nonatomic, readonly) _Bool isContentAvailable;
@property (nonatomic, readonly) _Bool isMutableContent;

+ (_Bool)supportsSecureCoding;
+ (id)triggerWithContentAvailable:(_Bool)arg1 mutableContent:(_Bool)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithContentAvailable:(_Bool)arg1 mutableContent:(_Bool)arg2;

@end
