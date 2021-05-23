/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/AnalyticsEngineCore.h>

@class AppAnalytics, CoreTelephonyShim, NSDate, NSMutableDictionary, NSObject, NSString, NWUsageManager, NWUsageTargetSelector, NetworkAnalyticsStateRelay, ObjectAnalytics, ProcessAnalytics, RepeatedConnFailureDetector, UsageAnalytics;

@protocol OS_dispatch_source;

@interface FlowAnalyticsEngine : AnalyticsEngineCore

{
    UsageAnalytics *uspace;
    ProcessAnalytics *pspace;
    AppAnalytics *aspace;
    ObjectAnalytics *calspace;
    NSMutableDictionary *processCache;
    NSMutableDictionary *appState;
    NSMutableDictionary *appCompactState;
    _Bool trackingRequiredForBaseband;
    NSMutableDictionary *pluginToBundleCache;
    NSMutableDictionary *audioBundleCache;
    NWUsageManager *nstatUsageManager;
    int cellularInterfaceIndex;
    NSDate *lastCellularThresholdRefreshTime;
    NWUsageTargetSelector *cellThresholdTargetSelector;
    NWUsageTargetSelector *cellRNFPeriodEndTargetSelector;
    struct ct_green_tea_logger_s *_greenTeaLogger;
    unsigned long long logStateHandle;
    NSObject<OS_dispatch_source> *siginfo;
    unsigned int pdpBitmap;
    CDUnknownBlockType dataUsageRefreshCompletionBlock;
    int dataUsageRefreshCompletionNumWaiting;
    NSDate *lastFullRefreshTime;
    id tetherObserver;
    _Bool isTetherActive;
    id appStateChangeObserver;
    id cellTCCapabilityObserver;
    RepeatedConnFailureDetector *repeatedConnFailureDetector;
    NSMutableDictionary *flowCache;
    NSMutableDictionary *flowInstant;
    id flowObserver;
    id relayReadyObserver;
    ObjectAnalytics *fspace;
    ObjectAnalytics *lfpspace;
    NSObject<OS_dispatch_source> *flushOldFlowRecordsTimer;
    int screenStateToken;
    _Bool isScreenDark;
    NSDate *screenDarkTimestamp;
    unsigned long long usageCoalescingSpanSecs;
    unsigned long long usageWindowUnitsCount;
    _Bool flowCountExceededThreshold;
    _Bool thunderingHerdFlowCountExceededThreshold;
    NSMutableDictionary *estAwdMetricsDict;
    unsigned long long trackedFlowCountSincePrimaryInterfaceChanged;
    CoreTelephonyShim *ctShim;
    _Bool _haveCalendar;
    _Bool _haveTypicalUsage;
    NSMutableDictionary *_flowWatchers;
    NetworkAnalyticsStateRelay *_cellRelay;
    NetworkAnalyticsStateRelay *_wifiRelay;
    NetworkAnalyticsStateRelay *_mostRecentPrimaryRelay;
}

@property (retain) NetworkAnalyticsStateRelay *cellRelay;
@property (retain) NetworkAnalyticsStateRelay *wifiRelay;
@property (retain) NetworkAnalyticsStateRelay *mostRecentPrimaryRelay;
@property _Bool haveCalendar;
@property _Bool haveTypicalUsage;
@property (retain, nonatomic) NSMutableDictionary *flowWatchers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)queue;
+ (id)foregroundAppKeys;
+ (_Bool)hasAnyForegroundApp;
+ (void)identifierForUUID:(id)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (void)workspaceSaveWithCallback:(CDUnknownBlockType)arg1;
+ (void)checkForegroundStateForProcessWithUUID:(id)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (void)endRNFPeriod;
+ (void)refreshDataUsageFor:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)recentUsageForApps:(id)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (void)appsWithFlowsPassingTest:(CDUnknownBlockType)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)identifierForUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_dumpState;
- (id)setOption:(id)arg1;
- (void)usageManager:(id)arg1 didReceiveSnapshot:(id)arg2;
- (void)usageManager:(id)arg1 thresholdReachedOn:(unsigned int)arg2;
- (id)_attemptConvertingPluginNameToContainingAppName:(id)arg1;
- (_Bool)_hasAnyForegroundApp;
- (int)performQueryOnEntityFromCache:(id)arg1 pred:(id)arg2 altpred:(id *)arg3 actions:(id)arg4 found:(id *)arg5;
- (void)performQueryPostProcessing:(id)arg1 actions:(id)arg2 processOutcome:(id)arg3;
- (id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3;
- (_Bool)handlesEntity:(id)arg1;
- (void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (id)getOption:(id)arg1;
- (void)resetDataFor:(id)arg1 nameKind:(id)arg2;
- (_Bool)_initializeLocalCache;
- (void)_changedForegroundState:(_Bool)arg1 forBundle:(id)arg2;
- (void)_startFlowMonitoring:(_Bool)arg1;
- (void)_updateTetheringUsage:(_Bool)arg1;
- (void)_newFlowData:(id)arg1;
- (void)_removeOldFlowRecords;
- (void)_refreshFullDataUsage;
- (void)_didReceiveSnapshot:(id)arg1;
- (void)_refreshFullDataUsageComplete;
- (void)_logExcessCellUsage:(long long)arg1 snapshot:(id)arg2;
- (void)_generateFlowAnomalySymptom:(unsigned int)arg1 currentUsage:(unsigned long long)arg2 snapshot:(id)arg3;
- (void)_reportThresholdedFlowCount:(unsigned long long)arg1 threshold:(unsigned long long)arg2;
- (void)_checkCellExcessUsageActions:(unsigned long long)arg1 previous:(unsigned long long)arg2 snapshot:(id)arg3;
- (id)_fetchFromProcCacheWithName:(id)arg1;
- (id)_processFetchForName:(id)arg1 bundle:(id)arg2 shouldFillMiss:(_Bool)arg3;
- (id)_liveUsageFetchForProcess:(id)arg1;
- (void)_updateLiveUsage:(id)arg1 wifiIn:(long long)arg2 wifiOut:(long long)arg3 cellIn:(long long)arg4 cellOut:(long long)arg5 wiredIn:(long long)arg6 wiredOut:(long long)arg7 xIn:(long long)arg8 xOut:(long long)arg9 isJumboFlow:(_Bool)arg10 closing:(_Bool)arg11;
- (void)_stopMonitoringNetworkInterface:(int)arg1;
- (void)_startMonitoringNetworkInterface:(int)arg1 usingThreshold:(unsigned long long)arg2;
- (void)_handleSnapshot:(id)arg1;
- (void)_refreshDataUsageFor:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (double)_usageFingerprintForBundleName:(id)arg1;
- (void)_saveAndUnloadSelectState;
- (void)_calendarUsageForApp:(id)arg1 givenLastRun:(id)arg2;
- (void)_compactUsageForApp:(id)arg1 intervalType:(int)arg2 givenLastRun:(id)arg3;
- (void)_refreshFullDataUsageWithCallback:(CDUnknownBlockType)arg1;
- (void)_handleApplicationNotificationStateChangedForBundleName:(id)arg1 edgeMode:(_Bool)arg2 intervalType:(int)arg3;
- (void)_handleApplicationNotificationCompactForBundleName:(id)arg1 edgeMode:(_Bool)arg2;
- (void)_removeInfoFromWorkspaceForProcess:(id)arg1;
- (void)_removeFromProcCache:(id)arg1;
- (void)_insertProcCache:(id)arg1 underName:(id)arg2;
- (_Bool)_isLiveUsageinScope:(id)arg1 forTime:(id)arg2;
- (unsigned long long)_liveUsageCountForProcess:(id)arg1 subscriberTag:(id)arg2;
- (void)_liveUsagePackForProcess:(id)arg1 subscriberTag:(id)arg2;
- (_Bool)_isLiveUsageInRollingWindow:(id)arg1 forTime:(id)arg2;
- (void)_applyCountsTo:(id)arg1 fromLiveUsage:(id)arg2 mustReset:(_Bool)arg3;
- (void)workspaceSaveWithCallback:(CDUnknownBlockType)arg1;
- (void)_checkForegroundStateForProcessWithUUID:(id)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_endRNFPeriod;
- (id)_foregroundAppKeys;
- (void)_recentUsageForApps:(id)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (_Bool)_bundleBackgroundAudioCapable:(id)arg1;
- (void)_appsWithFlowsPassingTest:(CDUnknownBlockType)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)identifierForUUID:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_trafficEnvelopeToTier:(double)arg1;
- (id)_flowFetchForName:(id)arg1;
- (_Bool)_isLiveFlowPerfinScope:(id)arg1 forTime:(id)arg2 andTag:(id)arg3;
- (id)_parseEvent:(id)arg1 withGeneration:(id *)arg2;
- (void)_pruneFlowHistory;
- (void)_archiveRecord:(id)arg1;
- (_Bool)_handlesProcEntity:(id)arg1;
- (_Bool)_handlesFlowEntity:(id)arg1;
- (void)performThresholdingOn:(id)arg1 forKey:(id)arg2 andValue:(id)arg3 connection:(id)arg4 createdBlock:(CDUnknownBlockType *)arg5 hitBlock:(CDUnknownBlockType)arg6 errorBlock:(CDUnknownBlockType)arg7;
- (id)_safePredFrom:(id)arg1 forEntity:(id)arg2;
- (int)_performQueryOnEntityFromProcCache:(id)arg1 target:(id)arg2 pred:(id)arg3 found:(id *)arg4;
- (int)_performQueryOnEntityFromInstantFlowCache:(id)arg1 target:(id)arg2 pred:(id)arg3 found:(id *)arg4;
- (void)_removeAllInfoForProcess:(id)arg1 withUUID:(id)arg2;
- (id)_has1stPartyImpliedBundleNameBehavior:(id)arg1;
- (_Bool)_processNameIsValid:(id)arg1;
- (id)_fetchFromFlowCacheWithName:(id)arg1;
- (void)getNetworkBitmapsWithNames:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;

@end
