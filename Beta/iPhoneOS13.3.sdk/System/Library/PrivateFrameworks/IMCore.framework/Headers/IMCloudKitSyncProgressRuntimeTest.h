/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMCloudKitEventNotificationManagerRuntimeTest.h>

@interface IMCloudKitSyncProgressRuntimeTest : IMCloudKitEventNotificationManagerRuntimeTest

{
    unsigned long long _progressCount;
    unsigned long long _maxProgressCount;
    double _progressRescheduleDelay;
}

@property unsigned long long progressCount;
@property unsigned long long maxProgressCount;
@property double progressRescheduleDelay;

- (void)setUp;
- (void)startTest;
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
- (id)createSyncStatisticsForMockSyncState:(id)arg1;

@end
