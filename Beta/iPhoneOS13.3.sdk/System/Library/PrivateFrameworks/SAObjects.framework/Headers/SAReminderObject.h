/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSString, SAReminderListObject, SAReminderRecurrence, SAReminderTrigger;

@protocol SAReminderPayload;

@interface SAReminderObject : SADomainObject

@property (copy, nonatomic) NSString *alternateSubject;
@property (nonatomic) _Bool completed;
@property (copy, nonatomic) NSDate *dueDate;
@property (copy, nonatomic) NSString *dueDateTimeZoneId;
@property (nonatomic) _Bool important;
@property (copy, nonatomic) NSArray *lists;
@property (retain, nonatomic) id <SAReminderPayload> payload;
@property (retain, nonatomic) SAReminderRecurrence *recurrence;
@property (copy, nonatomic) NSString *subject;
@property (retain, nonatomic) SAReminderListObject *toList;
@property (retain, nonatomic) SAReminderTrigger *trigger;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
