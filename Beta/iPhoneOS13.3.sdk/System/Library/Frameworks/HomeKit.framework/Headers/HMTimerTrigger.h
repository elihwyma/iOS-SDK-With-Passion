/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMTrigger.h>

#import <HomeKit/Swift-Protocol.h>

@class NSArray, NSCalendar, NSDate, NSDateComponents, NSString, NSTimeZone;

@interface HMTimerTrigger : HMTrigger <Swift>

{
    NSArray *_recurrences;
    NSString *_significantEvent;
    NSDateComponents *_significantEventOffset;
    NSDate *_fireDate;
    NSTimeZone *_timeZone;
    NSDateComponents *_recurrence;
    NSCalendar *_recurrenceCalendar;
}

@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSDateComponents *recurrence;
@property (copy, nonatomic, readonly) NSString *significantEvent;
@property (copy, nonatomic, readonly) NSDateComponents *significantEventOffset;
@property (copy, nonatomic, readonly) NSArray *recurrences;
@property (copy, nonatomic, readonly) NSCalendar *recurrenceCalendar;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setRecurrences:(id)arg1;
- (id)_serializeForAdd;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_handleTriggerFired:(id)arg1;
- (void)_updateRecurrences:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRecurrences:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateFireDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateTimeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateSignificantEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateSignificantEventOffset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateRecurrence:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setSignificantEvent:(id)arg1;
- (void)setSignificantEventOffset:(id)arg1;
- (void)_handleScheduleChangedNotification:(id)arg1;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrence:(id)arg4 recurrenceCalendar:(id)arg5;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrences:(id)arg4;
- (id)initWithName:(id)arg1 significantEvent:(id)arg2 significantEventOffset:(id)arg3 recurrences:(id)arg4;
- (void)updateFireDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateTimeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSignificantEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSignificantEventOffset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRecurrence:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
