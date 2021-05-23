/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@class HDMCProfileExtension, NSString, _HKDelayedOperation;

@interface HDMCDaySummaryObserverQueryServer : HDQueryServer

{
    HDMCProfileExtension *_profileExtension;
    _HKDelayedOperation *_updateOperation;
    _Bool _requiresUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (void)_queue_stop;
- (void)_queue_deliverUpdate;
- (id)objectTypes;
- (_Bool)_shouldListenForUpdates;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;

@end
