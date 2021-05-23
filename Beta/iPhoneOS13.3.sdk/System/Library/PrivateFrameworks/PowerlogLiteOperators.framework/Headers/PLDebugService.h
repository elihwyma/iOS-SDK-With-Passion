/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLService.h>

@class PLAccountingDebugService, PLEntryNotificationOperatorComposition, PLSemaphore, PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition;

@interface PLDebugService : PLService

{
    PLXPCListenerOperatorComposition *_xpcListenerPLLog;
    PLXPCResponderOperatorComposition *_xpcResponderPLLog;
    PLXPCResponderOperatorComposition *_xpcResponderPLAPITest;
    PLXPCListenerOperatorComposition *_aggregateTestListener;
    PLXPCResponderOperatorComposition *_aggregateTestResponder;
    PLXPCListenerOperatorComposition *_schemaTestListener;
    PLEntryNotificationOperatorComposition *_assertionListener;
    PLEntryNotificationOperatorComposition *_assertionNewListener;
    PLEntryNotificationOperatorComposition *_assertionUpdateListener;
    PLEntryNotificationOperatorComposition *_canSleepNotification;
    PLSemaphore *_canSleepSemaphore;
    PLEntryNotificationOperatorComposition *_sleepNotification;
    PLEntryNotificationOperatorComposition *_wakeNotification;
    PLAccountingDebugService *_accDS;
}

@property (retain) PLXPCListenerOperatorComposition *xpcListenerPLLog;
@property (retain) PLXPCResponderOperatorComposition *xpcResponderPLLog;
@property (retain) PLXPCResponderOperatorComposition *xpcResponderPLAPITest;
@property (retain) PLXPCListenerOperatorComposition *aggregateTestListener;
@property (retain) PLXPCResponderOperatorComposition *aggregateTestResponder;
@property (retain) PLXPCListenerOperatorComposition *schemaTestListener;
@property (retain) PLEntryNotificationOperatorComposition *assertionListener;
@property (retain) PLEntryNotificationOperatorComposition *assertionNewListener;
@property (retain) PLEntryNotificationOperatorComposition *assertionUpdateListener;
@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification;
@property (retain) PLSemaphore *canSleepSemaphore;
@property (retain) PLEntryNotificationOperatorComposition *sleepNotification;
@property (retain) PLEntryNotificationOperatorComposition *wakeNotification;
@property (retain) PLAccountingDebugService *accDS;

+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)railDefinitions;
+ (id)entryEventPointDefinitionTest;
+ (id)entryAggregateDefinitionAggregateTest;
+ (id)entryAggregateDefinitionAggregateTestSmall;
+ (id)entryAggregateDefinitionAggregateTestVerySmall;
+ (id)entryAggregateDefinitionAggregateTestSplitAndBucket;
+ (id)entryEventNoneDefinitionPLAPITest;
+ (id)entryEventNoneDefinitionArrayTest;
+ (id)entryEventNoneDefinitionSleepNotificationTest;
+ (id)entryEventNoneDefinitionFastInsertTest;

- (id)init;
- (void)testArchive;
- (void)initOperatorDependancies;
- (void)printNullTestResultsForEntry:(id)arg1 withDescription:(id)arg2;
- (id)testPLAPICore_WriteEntry:(id)arg1;
- (id)testPLAPICore_UpdateEntry:(id)arg1;
- (id)testPLAPICore_DeleteEntry:(id)arg1;
- (id)testPLAPICore_DeleteEntryForKey:(id)arg1;
- (id)testPLAPICore_DeleteAllEntriesForKey:(id)arg1;
- (id)testPLAPICore_DeleteAllEntriesForKeyWF:(id)arg1;
- (id)testPLAPICore_DeleteAllEntriesForKeyBTWF:(id)arg1;
- (id)testPLAPICore_EntriesForKeyWithProperties:(id)arg1;
- (id)testPLAPICore_EntriesForKeyInTimeRange:(id)arg1;
- (id)testPLAPICore_EntriesForKeyBeforeTICWF:(id)arg1;
- (id)testPLAPICore_LastEntryForKeyWSEK:(id)arg1;
- (id)testPLAPICore_LastEntryForKeyWC:(id)arg1;
- (id)testPLAPIAccounting_CreatePowerEventForward:(id)arg1;
- (id)testPLAPIAccounting_CreatePowerEventBackward:(id)arg1;
- (id)testPLAPIAccounting_CreatePowerEventInterval:(id)arg1;
- (id)testPLAPIAccounting_AddPowerMeasurementEventInterval:(id)arg1;
- (id)testPLAPIAccounting_CreateDistributionEventForwardAdd:(id)arg1;
- (id)testPLAPIAccounting_CreateDistributionEventForwardRem:(id)arg1;
- (id)testPLAPIAccounting_CreateDistributionEventForwardChild:(id)arg1;
- (id)testPLAPIAccounting_CreateDistributionEventBackward:(id)arg1;
- (id)testPLAPIAccounting_CreateDistributionEventInterval:(id)arg1;
- (id)testPLAPIAccounting_CreateDistributionEventPoint:(id)arg1;
- (id)testPLAPIAccounting_CreateQualificationEventForwardAdd:(id)arg1;
- (id)testPLAPIAccounting_CreateQualificationEventForwardRem:(id)arg1;
- (id)testPLAPIAccounting_CreateQualificationEventForwardChild:(id)arg1;
- (id)testPLAPIAccounting_CreateQualificationEventBackward:(id)arg1;
- (id)testPLAPIAccounting_CreateQualificationEventInterval:(id)arg1;
- (id)testPLAPIAccounting_CreateQualificationEventPoint:(id)arg1;
- (id)testPLAPIAccounting_ExistingTest:(id)arg1;
- (id)test_LogPass:(id)arg1 str:(id)arg2;
- (id)test_LogErr:(id)arg1 str:(id)arg2;
- (_Bool)rawWrite:(id)arg1;
- (id)filledTestArrayEntry;
- (_Bool)rawRead:(id)arg1;
- (id)testPLAPICore_WriteEntries:(id)arg1;
- (void)fireSignificantBatteryChangeNotification;
- (void)testCompression;
- (void)testUTF8;
- (void)stressAggregateSmall;
- (void)stressAggregateVerySmall;
- (void)testExit;
- (void)testBlockingFlushCaches;
- (void)stressMonotonicTimer;
- (void)stressMonotonicTimer2;
- (void)stressMonotonicTimer3;
- (void)testMonotonicTimerThroughSleep;
- (void)stressActivityScheduler;
- (void)currentBasebandTime;
- (void)stressMidnightCalculation;
- (void)stressCacheSmall;
- (void)stressCache;
- (void)stressSetObjectForKey;
- (void)stressObjectForKey;
- (void)stressPLEntry;
- (void)stressTimer;
- (void)testDailyTasks;
- (void)testABM;
- (void)testArray;
- (void)testGenerateOTASubmission;
- (void)stressTaskingSubmission;
- (void)testFastInserts;
- (void)testAllEntryKeyRequests;
- (void)testEntrySleep;
- (void)testEntryWake;
- (void)testEntryLogRequestedForEntryKey:(id)arg1;
- (void)testEntryApplicationAgent;
- (void)testEntryDelete;
- (void)testEntryQueries;
- (void)testMonotonicAggregateEntries;
- (void)testMonotonicAggregateEntriesExtendedTime;
- (void)testProportionateAggregateEntries;

@end
