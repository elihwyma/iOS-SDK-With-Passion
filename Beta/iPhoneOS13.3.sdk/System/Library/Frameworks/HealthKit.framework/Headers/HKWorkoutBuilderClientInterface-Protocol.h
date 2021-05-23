/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/Swift-Protocol.h>

@protocol HKWorkoutBuilderClientInterface <Swift>

- (unsigned short)clientRemote_didUpdateStatistics: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_didUpdateMetadata: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_didUpdateEvents: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_didChangeElapsedTimeBasisWithStartDate:endDate: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_didRecoverSeriesBuilders: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_didFinishRecovery;
- (unsigned short)clientRemote_synchronizeWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_stateDidChange:startDate:endDate: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_finishedWorkout: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_didFailWithError: /* Error: Ran out of types for this method. */;

@end
