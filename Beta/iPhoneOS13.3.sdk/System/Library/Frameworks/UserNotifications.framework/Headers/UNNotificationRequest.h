/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSObject.h>

@class NSString, UNNotificationContent, UNNotificationTrigger;

@interface UNNotificationRequest : NSObject

{
    UNNotificationContent *_content;
    UNNotificationTrigger *_trigger;
    unsigned long long _destinations;
    NSString *_identifier;
}

@property (nonatomic) unsigned long long destinations;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) UNNotificationContent *content;
@property (copy, nonatomic, readonly) UNNotificationTrigger *trigger;

+ (_Bool)supportsSecureCoding;
+ (id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3;
+ (id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 destinations:(unsigned long long)arg4;
+ (id)requestWithIdentifier:(id)arg1 pushPayload:(id)arg2 bundleIdentifier:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 destinations:(unsigned long long)arg4;

@end
