/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNNotificationContent, NSString;

@interface CALNNotificationRequest : NSObject

{
    NSString *_identifier;
    CALNNotificationContent *_content;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) CALNNotificationContent *content;

+ (_Bool)supportsSecureCoding;
+ (id)requestWithIdentifier:(id)arg1 content:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToRequest:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 content:(id)arg2;

@end
