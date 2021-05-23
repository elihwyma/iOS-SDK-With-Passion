/*
 Image: /System/Library/PrivateFrameworks/AppNotificationsLoggingClient.framework/AppNotificationsLoggingClient
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@interface ATXNotificationsAggregateLogger : NSObject

{
    PETScalarEventTracker *_rttSelectionTracker;
    PETScalarEventTracker *_rttFromTracker;
}

+ (id)sharedInstance;
+ (id)rtFromMapping;
+ (id)rtOutcomesMapping;
+ (id)stringForRTOutcome:(unsigned long long)arg1;
+ (id)stringForRTFrom:(unsigned long long)arg1;

- (id)init;
- (void)logRealTimeTuningCountFrom:(unsigned long long)arg1;
- (void)logRealTimeTuningOutcome:(unsigned long long)arg1;

@end
