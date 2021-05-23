/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKFrozenReminderObject.h>

@class EKFrozenReminderStructuredLocation, NSArray, NSString, REMAlarm;

__attribute__((visibility("hidden")))
@interface EKFrozenReminderAlarm : EKFrozenReminderObject

{
    REMAlarm *_timeAlarm;
    REMAlarm *_locationAlarm;
}

@property (readonly) NSArray *alarms;
@property (readonly) NSArray *triggers;
@property (readonly) NSString *externalID;
@property (readonly) EKFrozenReminderStructuredLocation *structuredLocation;

+ (id)uniqueIdentifierForREMObject:(id)arg1;
+ (Class)meltedClass;
+ (id)semanticIdentifierFromREMAlarm:(id)arg1;
+ (id)triggersFromAbsoluteDate:(id)arg1 relativeOffset:(double)arg2 timeValuesRelevant:(_Bool)arg3 structuredLocation:(id)arg4 proximity:(long long)arg5;
+ (long long)ekAlarmProximityToEKAlarmProximity:(long long)arg1;
+ (id)semanticIdentifierFromDateComponents:(id)arg1;
+ (long long)remAlarmProximityToEKAlarmProximity:(long long)arg1;

- (id)UUID;
- (id)uniqueIdentifier;
- (long long)proximity;
- (id)absoluteDate;
- (double)relativeOffset;
- (id)remObjectID;
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;
- (_Bool)_applyChangesToSaveRequest:(id)arg1 error:(id *)arg2;
- (id)initWithAlarms:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;
- (id)semanticIdentifier;
- (_Bool)_applyChanges:(id)arg1 error:(id *)arg2;
- (_Bool)isDefaultAlarm;
- (id)originalAlarm;
- (id)updatedFrozenObjectWithChanges:(id)arg1 updatedChildren:(id)arg2;
- (id)initWithAlternateUniverseObject:(EKPersistentObject_556b3b22 *)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3;
- (id)modifiedStructuredLocation;
- (id)_setTimeOrLocationAlarm:(id)arg1;
- (void)_setTimeAndLocationAlarms:(id)arg1;
- (id)_timeAlarm;
- (id)_locationAlarm;
- (id)_remStructuredLocation;
- (id)initWithAlarms:(id)arg1 inStore:(id)arg2;
- (id)updatedAlarmWithLocation:(id)arg1;

@end
