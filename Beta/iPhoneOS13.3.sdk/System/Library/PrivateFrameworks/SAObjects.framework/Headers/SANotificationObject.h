/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSDate, NSNumber, NSString;

@interface SANotificationObject : SADomainObject

@property (copy, nonatomic) NSString *applicationId;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSNumber *dateIsAllDay;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *notificationId;
@property (copy, nonatomic) NSNumber *previewRestricted;
@property (copy, nonatomic) NSString *priority;
@property (copy, nonatomic) NSDate *recencyDate;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSString *timeZoneId;
@property (copy, nonatomic) NSString *type;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
