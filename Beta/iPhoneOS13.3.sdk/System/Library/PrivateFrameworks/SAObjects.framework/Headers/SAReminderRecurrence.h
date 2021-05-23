/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SAReminderRecurrence : AceObject <Swift>

@property (copy, nonatomic) NSArray *daysOfTheMonth;
@property (copy, nonatomic) NSArray *daysOfTheWeek;
@property (copy, nonatomic) NSArray *daysOfTheYear;
@property (copy, nonatomic) NSString *frequencyTimeUnit;
@property (nonatomic) long long interval;
@property (copy, nonatomic) NSArray *monthsOfTheYear;
@property (copy, nonatomic) NSArray *weeksOfTheYear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)recurrence;
+ (id)recurrenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
