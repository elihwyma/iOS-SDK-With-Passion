/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, NSString, SAReminderRecurrence, SAReminderTrigger;

@interface SAReminderListObject : SADomainObject

@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAReminderRecurrence *recurrence;
@property (retain, nonatomic) SAReminderTrigger *reminderTrigger;
@property (copy, nonatomic) NSArray *reminders;
@property (copy, nonatomic) NSArray *remindersToCreate;
@property (copy, nonatomic) NSNumber *totalNumOfReminders;

+ (id)listObject;
+ (id)listObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
