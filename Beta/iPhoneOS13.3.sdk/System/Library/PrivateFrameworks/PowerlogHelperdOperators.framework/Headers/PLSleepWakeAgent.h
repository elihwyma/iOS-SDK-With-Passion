/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <PowerlogCore/PLAgent.h>

@class PLEventForwardPowerStateEntry, PLSemaphore, PLXPCListenerOperatorComposition;

@interface PLSleepWakeAgent : PLAgent

{
    unsigned int _rootDomainConnect;
    unsigned int _pmNotifier;
    struct IONotificationPort *_systemPowerPortRef;
    PLSemaphore *_canSleepSemaphore;
    double _apSOCBasePower;
    PLXPCListenerOperatorComposition *_wakeGestureXPCListener;
    struct __IOPMConnection *_pmConnection;
    PLEventForwardPowerStateEntry *_lastSleepEntry;
    PLEventForwardPowerStateEntry *_lastWakeEntry;
}

@property unsigned int rootDomainConnect;
@property unsigned int pmNotifier;
@property struct IONotificationPort *systemPowerPortRef;
@property (retain) PLSemaphore *canSleepSemaphore;
@property double apSOCBasePower;
@property (retain) PLXPCListenerOperatorComposition *wakeGestureXPCListener;
@property struct __IOPMConnection *pmConnection;
@property (retain) PLEventForwardPowerStateEntry *lastSleepEntry;
@property (retain) PLEventForwardPowerStateEntry *lastWakeEntry;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)railDefinitions;
+ (id)entryEventNoneDefinitionPowerNapConfig;
+ (id)entryEventPointDefinitionWakeGesture;
+ (id)entryEventPointDefinitionCurrentMachWakeTime;
+ (id)entryEventPointDefinitionKernelState;
+ (id)entryEventForwardDefinitionPowerState;
+ (id)entryEventForwardDefinitionUserIdle;
+ (id)entryEventPointDefinitionCurrentKernelWakeTime;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)registerForDarkwakeEvent;
- (id)getLastSleepEntry;
- (id)getLastWakeEntry;
- (void)systemPoweredOn:(_Bool)arg1;
- (void)logEventPointWakeGesture:(id)arg1;
- (void)registerForUserIdleNotification;
- (void)logEventNonePowerNapConfig;
- (void)systemPoweredOn:(_Bool)arg1 withCapabilities:(unsigned int)arg2;
- (void)logSleepEntries:(id)arg1;
- (void)logWakeEntries:(id)arg1 withCurrentTime:(unsigned long long)arg2 withIsDarkwake:(_Bool)arg3 withCapabilities:(unsigned int)arg4;
- (void)logEventPointKernelState;
- (short)getSleepState;
- (id)getSleepStatisticsApps;
- (id)wakeReasons;
- (id)wakeReasonsAsNSString;
- (unsigned long long)getCurrentWakeTime;
- (id)getCurrentWakeTimeKey;
- (id)getThisWakeEntry:(id)arg1 withCurrentWakeTime:(unsigned long long)arg2 withCapabilities:(unsigned int)arg3 withIsDarkwake:(_Bool)arg4 withDidSleep:(_Bool)arg5;
- (id)getPostWakeEntry:(unsigned long long)arg1;
- (unsigned int)getIOPMRootDomain;
- (void)logEventForwardUserIdle:(_Bool)arg1;
- (unsigned long long)getSleepSubclassKey;
- (id)sleepTriggers;
- (id)wakeTriggers;
- (id)wakeTriggersSubclass;

@end
