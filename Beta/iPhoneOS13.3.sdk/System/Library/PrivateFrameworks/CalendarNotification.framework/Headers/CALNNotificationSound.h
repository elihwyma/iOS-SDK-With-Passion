/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CALNNotificationSound : NSObject

{
    long long _alertType;
    NSString *_alertTopic;
}

@property (nonatomic, readonly) long long alertType;
@property (copy, nonatomic, readonly) NSString *alertTopic;

+ (_Bool)supportsSecureCoding;
+ (id)soundWithAlertType:(long long)arg1 alertTopic:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToSound:(id)arg1;
- (id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2;

@end
