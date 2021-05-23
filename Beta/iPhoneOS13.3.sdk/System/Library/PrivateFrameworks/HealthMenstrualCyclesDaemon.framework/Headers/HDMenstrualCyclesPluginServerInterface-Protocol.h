/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <HealthMenstrualCyclesDaemon/Swift-Protocol.h>

@protocol HDMenstrualCyclesPluginServerInterface <Swift>

- (unsigned short)remote_fetchScheduledNotificationsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_saveDaySummaries:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_saveMenstrualFlow:dayIndex:updateAdjacentDays:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_saveMenstrualFlowByDayIndex:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_saveLastMenstrualPeriodWithDayIndexRange:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_savePeriodNotYetStartedWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_savePeriodNotYetEndedWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_savePeriodStartedOnDayIndex:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_savePeriodStartedOnDayIndex:endedOnDayIndex:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_savePeriodEndedOnDayIndex:completion: /* Error: Ran out of types for this method. */;

@end
