/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/Swift-Protocol.h>

@class MTAlarm, NSArray, NSDate;

@protocol MTAlarmStorage <Swift>

@property (nonatomic, readonly) NSArray *alarms;
@property (nonatomic, readonly) MTAlarm *sleepAlarm;
@property (nonatomic, readonly) MTAlarm *nextAlarm;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSArray *allAlarms;

- (unsigned short)registerObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)snoozeAlarmWithIdentifier:snoozeAction:withCompletion:source: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissAlarmWithIdentifier:dismissAction:withCompletion:source: /* Error: Ran out of types for this method. */;
- (unsigned short)snoozeAlarmWithIdentifier:snoozeDate:snoozeAction:withCompletion:source: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissAlarmWithIdentifier:dismissDate:dismissAction:withCompletion:source: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllAlarmsForSource: /* Error: Ran out of types for this method. */;
- (unsigned short)getAlarmsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)addAlarm:withCompletion:source: /* Error: Ran out of types for this method. */;
- (unsigned short)updateAlarm:withCompletion:source: /* Error: Ran out of types for this method. */;
- (unsigned short)updateAlarmWithIdentifier:changeSet:withCompletion:source: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAlarm:withCompletion:source: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAlarmWithIdentifier:withCompletion:source: /* Error: Ran out of types for this method. */;
- (unsigned short)setAllAlarms:sleepAlarm:source: /* Error: Ran out of types for this method. */;
- (unsigned short)alarmWithIdentifier:withCompletion: /* Error: Ran out of types for this method. */;

@end
