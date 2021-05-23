/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <UserNotifications/UNNotificationAttachmentOptions.h>

@interface UNAudioNotificationAttachmentOptions : UNNotificationAttachmentOptions

+ (_Bool)supportsSecureCoding;
+ (id)_sharedInstance;
+ (id)optionsFromOptionsDictionary:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;

@end
