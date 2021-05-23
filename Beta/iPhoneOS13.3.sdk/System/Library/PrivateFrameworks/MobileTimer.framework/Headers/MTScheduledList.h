/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@protocol MTScheduledListDelegate;

@interface MTScheduledList : NSObject

{
    id <MTScheduledListDelegate> _delegate;
    NSMutableOrderedSet *_orderedScheduledAlerts;
    NSMutableOrderedSet *_orderedScheduledNotifications;
    NSMutableOrderedSet *_orderedScheduledEvents;
    NSMutableDictionary *_scheduledAlertMap;
}

@property (weak, nonatomic) id <MTScheduledListDelegate> delegate;
@property (retain, nonatomic) NSMutableOrderedSet *orderedScheduledAlerts;
@property (retain, nonatomic) NSMutableOrderedSet *orderedScheduledNotifications;
@property (retain, nonatomic) NSMutableOrderedSet *orderedScheduledEvents;
@property (retain, nonatomic) NSMutableDictionary *scheduledAlertMap;
@property (nonatomic, readonly) unsigned long long numberOfScheduledAlerts;
@property (nonatomic, readonly) unsigned long long numberOfScheduledAlertsAndNotifications;
@property (nonatomic, readonly) NSArray *scheduledAlerts;
@property (nonatomic, readonly) NSArray *scheduledAlertsAndNotifications;
@property (nonatomic, readonly) NSArray *scheduledObjects;

+ (CDUnknownBlockType)_scheduledObjectComparator;
+ (void)_sort:(id)arg1;
+ (id)_filterScheduledObjects:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (CDUnknownBlockType)_dateIntervalFilter:(id)arg1;
+ (id)_nextScheduledObjectInSets:(id)arg1;

- (id)init;
- (id)description;
- (void)reset;
- (id)initWithDelegate:(id)arg1;
- (id)_scheduledListForTriggerType:(unsigned long long)arg1;
- (void)_unschedule:(id)arg1;
- (void)_performScheduleChangingBlock:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_unscheduleObject:(id)arg1;
- (void)_scheduleObject:(id)arg1;
- (id)nextScheduledAlertOrNotification;
- (id)scheduledObjectsToFireBeforeDate:(id)arg1;
- (id)scheduledObjectsToFireInInterval:(id)arg1;
- (id)nextScheduledAlert;
- (id)nextScheduledObject;
- (id)nextScheduledObjectWithTriggerType:(unsigned long long)arg1;
- (void)unschedule:(id)arg1;
- (void)schedule:(id)arg1 afterDate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)isScheduled:(id)arg1;

@end
