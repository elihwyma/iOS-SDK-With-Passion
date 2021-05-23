/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@protocol NAScheduler;

@interface MTMetrics : NSObject

{
    id <NAScheduler> _serializer;
    unsigned long long _operationStartTime;
}

@property (retain, nonatomic) id <NAScheduler> serializer;
@property (nonatomic) unsigned long long operationStartTime;

+ (id)_sharedPublicMetrics;

- (id)init;
- (void)logAlarmSnoozeAction:(unsigned long long)arg1;
- (void)logAlarmDismissAction:(unsigned long long)arg1;
- (void)logTimerDismissed;
- (void)logTimerRepeated;
- (void)logAlarmAdded:(_Bool)arg1;
- (void)logAlarmDeleted:(_Bool)arg1;
- (void)logAlarmUpdated:(_Bool)arg1;
- (void)logTimerAdded;
- (void)logTimerDeleted;
- (void)logTimerUpdated;
- (void)logSyncCompleted;
- (void)logSyncFailedWithError:(id)arg1;

@end
