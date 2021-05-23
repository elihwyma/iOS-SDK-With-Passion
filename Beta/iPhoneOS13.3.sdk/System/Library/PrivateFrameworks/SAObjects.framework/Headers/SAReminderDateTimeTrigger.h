/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAReminderTrigger.h>

@class NSDate, NSString, SAReminderDateTimeTriggerOffset;

@interface SAReminderDateTimeTrigger : SAReminderTrigger

@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) SAReminderDateTimeTriggerOffset *offset;
@property (retain, nonatomic) SAReminderDateTimeTriggerOffset *relativeTimeOffset;
@property (copy, nonatomic) NSString *timeZoneId;

+ (id)dateTimeTrigger;
+ (id)dateTimeTriggerWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
