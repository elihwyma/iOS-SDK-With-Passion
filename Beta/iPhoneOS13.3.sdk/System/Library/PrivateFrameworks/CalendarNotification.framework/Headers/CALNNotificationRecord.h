/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNNotificationContent, NSDate, NSString;

@interface CALNNotificationRecord : NSObject

{
    NSString *_sourceIdentifier;
    NSString *_sourceClientIdentifier;
    CALNNotificationContent *_content;
    NSDate *_date;
    _Bool _shouldPresentAlert;
    _Bool _shouldPlaySound;
}

@property (copy, nonatomic, readonly) NSString *sourceIdentifier;
@property (copy, nonatomic, readonly) NSString *sourceClientIdentifier;
@property (copy, nonatomic, readonly) CALNNotificationContent *content;
@property (copy, nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) _Bool shouldPresentAlert;
@property (nonatomic, readonly) _Bool hasAlertContent;
@property (nonatomic, readonly) _Bool shouldPlaySound;
@property (nonatomic, readonly) _Bool hasSound;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 content:(id)arg3;
- (id)initWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 content:(id)arg3 date:(id)arg4 shouldPresentAlert:(_Bool)arg5 shouldPlaySound:(_Bool)arg6;
- (_Bool)isEqualToRecord:(id)arg1;

@end
