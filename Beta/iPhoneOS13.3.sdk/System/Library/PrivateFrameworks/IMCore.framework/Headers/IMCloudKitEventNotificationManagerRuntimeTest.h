/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMSharedUtilities/IMRuntimeTestCase.h>

@class IMCloudKitHookTestSingleton, NSString;

@interface IMCloudKitEventNotificationManagerRuntimeTest : IMRuntimeTestCase

{
    double _previousInterval;
    double _defaultTestDuration;
    IMCloudKitHookTestSingleton *_cloudKitHooks;
}

@property double defaultTestDuration;
@property (retain, nonatomic) IMCloudKitHookTestSingleton *cloudKitHooks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)tearDown;
- (void)setUp;
- (void)startTest;
- (void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2;
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
- (void)sendSyncStateChangedEvent;
- (id)createSyncStatisticsForMockSyncState:(id)arg1;
- (void)willUpdateSyncState:(id)arg1;
- (void)willSendSyncState:(id)arg1 withSyncStatistics:(id)arg2;
- (void)updateMockSyncState;

@end
