/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class AWDAgent, AWDUsageDeltaTracker, CTCarrierSpaceClient, CanUseAppsCache, MotionStateRelay, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, NWUsageTargetSelector, NetworkAnalyticsStateRelay, State, SystemSettingsRelay;

@protocol OS_dispatch_source;

@interface CellFallbackHandler : NSObject

{
    State *currentState;
    NSArray *states;
    NetworkAnalyticsStateRelay *cellRelay;
    NetworkAnalyticsStateRelay *wifiRelay;
    id relayReadyObserver;
    id iccidObserver;
    id polledFlowObserver;
    id appsActivityObserver;
    int notifyToken;
    NSObject<OS_dispatch_source> *motionTimer;
    unsigned int motionDetectorState;
    MotionStateRelay *motionRelay;
    SystemSettingsRelay *settingsRelay;
    unsigned int administrativeState;
    AWDAgent *awdAgent;
    unsigned long long appBlacklistsSettleTime;
    unsigned long long appBlacklistsFreePassCellMax;
    unsigned long long appBlacklistsFreePassFlowMax;
    double appBlacklistsRNFToCellRatio;
    _Bool nonDefaultAppBlacklistsRNFToCellRatio;
    _Bool highCapacityCellPlan;
    _Bool nonDefaultHighCapacityCellPlan;
    struct tcp_connection_fallback_watch_s *cellFallbackObserver;
    _Bool cellFallbackInUse;
    NSObject<OS_dispatch_source> *mptcpObserver;
    _Bool mptcpInUse;
    _Bool needExtendedSignatures;
    _Bool useAllTCPStats;
    NSObject<OS_dispatch_source> *cellFallbackTimer;
    NSObject<OS_dispatch_source> *elevatedStateTimer;
    NSObject<OS_dispatch_source> *wrongUsageGracePeriodTimer;
    NSDate *lastCellFallbackTime;
    unsigned long long lastCellFallbackUsageMarker;
    NWUsageTargetSelector *targetFlowsRNF;
    NWUsageTargetSelector *targetFlowsCell;
    CTCarrierSpaceClient *cellPlanObserver;
    unsigned long long appPolicyCheckedCount;
    unsigned long long appPolicyDeniedCount;
    NSObject<OS_dispatch_source> *timerTriggerDisconnect;
    AWDUsageDeltaTracker *usageTriggerDisconnect;
    CanUseAppsCache *appsCache;
    NSMutableDictionary *overdraftLedger;
    NSMutableDictionary *blockedRenewalLedger;
    NSMutableDictionary *dynamicBlacklist;
    NSObject<OS_dispatch_source> *boostedTimer;
    unsigned int boostedState;
    NSString *_currentDataSimICCID;
    _Bool hasMDMProfile;
    unsigned long long currentPolicy;
    NSDictionary *mdmProfile;
    _Bool _rnfActivated;
    _Bool _wifiCallUnderway;
    _Bool _boosted;
    _Bool _runningRNFTest;
    unsigned int _activationIdentifier;
    long long _fallbackAdvice;
}

@property (nonatomic, readonly) unsigned int activationIdentifier;
@property _Bool rnfActivated;
@property _Bool wifiCallUnderway;
@property long long fallbackAdvice;
@property _Bool boosted;
@property _Bool runningRNFTest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)configureClass:(id)arg1;
+ (float)appPolicyDenialsScore;
+ (void)canUseApps:(id)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (id)internalStateDictionary;
+ (void)requestBoost:(unsigned int)arg1;
+ (id)mdmProfilePath;
+ (int)awdWifiAssistPolicyForRNFPolicy:(unsigned long long)arg1;
+ (void)setRunningRNFTest:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)commonInit;
- (id)_currentState;
- (id)_states;
- (void)_dumpState;
- (void)dataPlanMetricsDidChange;
- (int)configureInstance:(id)arg1;
- (int)read:(id)arg1 returnedValues:(id)arg2;
- (void)generateInfoForId:(unsigned long long)arg1 context:(const char *)arg2 uuid:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)noteSymptom:(id)arg1;
- (void)_completeInitialization;
- (void)_bringStateToIdle;
- (void)_administrativeDisable;
- (void)_administrativeEnable;
- (id)internalStateDictionary;
- (void)requestBoost:(unsigned int)arg1;
- (_Bool)_idempotentInitializationFromIdle;
- (void)postHasAdviceNotification:(_Bool)arg1;
- (void)applyDataUsagePolicyForICCID:(id)arg1 givenPolicies:(id)arg2;
- (void)postUpwards:(long long)arg1 appsWithStates:(id)arg2 always:(_Bool)arg3;
- (void)_updateCellFallbackState;
- (void)_updateMptcpState;
- (void)_setDataUsagePolicy:(unsigned long long)arg1;
- (void)_peekIntoCellPlan;
- (_Bool)_idempotentInitializationFromIdleWithCellRelay:(id)arg1 wifiRelay:(id)arg2 motionRelay:(id)arg3;
- (void)_setUnlimitedDataUsageParameters;
- (void)_setDefaultDataUsageParameters;
- (unsigned long long)lookUpDataUsagePolicyForICCID:(id)arg1 fromPolicies:(id)arg2;
- (void)postMotionDetector:(unsigned int)arg1;
- (void)stopElevatedStateWatchdog;
- (void)stopWrongUsageGracePeriodTimer;
- (void)startElevatedStateWatchdogWithPeriod:(unsigned long long)arg1;
- (void)postUpwards:(long long)arg1;
- (int)_motionToAwdCode;
- (void)_toggleElevatedState;
- (void)postSpeculativeTelemetryForKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3;
- (void)_canUseApps:(id)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_createAndInitializeAWDMetricForAppQuery:(id)arg1 verdictCode:(int)arg2 reasonCode:(int)arg3;
- (_Bool)_isAppName:(id)arg1 withState:(long long)arg2 inListType:(long long)arg3;
- (void)_setPolicyVerdictLedgerGivenAsk:(id)arg1 exceptions:(id)arg2 verdict:(id)arg3 explain:(id)arg4;
- (float)_appPolicyDenialsScore;
- (void)processRefreshedRNFDataUsageWithGrace:(_Bool)arg1;
- (void)_trackCellUsageAfterTriggerDisconnectWithNewSeries:(_Bool)arg1;
- (id)initTestInstanceWithCellRelay:(id)arg1 wifiRelay:(id)arg2 motionRelay:(id)arg3;
- (void)_setUnlimitedDataUsagePolicy:(_Bool)arg1;
- (unsigned long long)appBlacklistsSettleTime;
- (double)appBlacklistsRNFToCellRatio;
- (_Bool)highCapacityCellPlan;
- (void)updateFallbackAdvice:(long long)arg1;

@end
