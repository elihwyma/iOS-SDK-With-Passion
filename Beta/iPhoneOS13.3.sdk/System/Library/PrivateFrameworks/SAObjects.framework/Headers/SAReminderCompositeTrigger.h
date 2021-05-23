/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAReminderTrigger.h>

@class SAReminderDateTimeTrigger, SAReminderLocationTrigger;

@interface SAReminderCompositeTrigger : SAReminderTrigger

@property (retain, nonatomic) SAReminderDateTimeTrigger *dateTimeTrigger;
@property (retain, nonatomic) SAReminderLocationTrigger *locationTrigger;

+ (id)compositeTrigger;
+ (id)compositeTriggerWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
