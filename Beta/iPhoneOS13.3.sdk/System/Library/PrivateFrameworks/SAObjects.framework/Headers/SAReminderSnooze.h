/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SAReminderDateTimeTriggerOffset;

@interface SAReminderSnooze : SABaseClientBoundCommand

@property (retain, nonatomic) SAReminderDateTimeTriggerOffset *offset;
@property (copy, nonatomic) NSArray *reminderIdentifierList;

+ (id)snooze;
+ (id)snoozeWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
