/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, UNNotificationRequest;

@interface UNNotification : NSObject

{
    NSDate *_date;
    UNNotificationRequest *_request;
    NSString *_sourceIdentifier;
    NSArray *_intentIdentifiers;
}

@property (copy, nonatomic, readonly) NSString *sourceIdentifier;
@property (copy, nonatomic, readonly) NSArray *intentIdentifiers;
@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) UNNotificationRequest *request;

+ (_Bool)supportsSecureCoding;
+ (id)notificationWithRequest:(id)arg1 date:(id)arg2;
+ (id)notificationWithRequest:(id)arg1 date:(id)arg2 sourceIdentifier:(id)arg3 intentIdentifiers:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 date:(id)arg2 sourceIdentifier:(id)arg3 intentIdentifiers:(id)arg4;

@end
