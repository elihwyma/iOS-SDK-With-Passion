/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/ExpertSystemHandlerCore.h>

@class AWDAgent, AnalyticsWorkspace, CARAutomaticDNDStatus, CellFallbackHandler, ImpoExpoService, NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString, NetworkAnalyticsStateRelay, NoBackhaulHandlerState, PowerStateRelay;

@protocol OS_dispatch_source;

@interface NoBackhaulHandler : ExpertSystemHandlerCore

{
    unsigned int _administrativeState;
    NSMutableArray *_pendingEventDescriptions;
    NoBackhaulHandlerState *_currentState;
    NSArray *_states;
    NetworkAnalyticsStateRelay *_cellRelay;
    NetworkAnalyticsStateRelay *_wifiRelay;
    CellFallbackHandler *_rnfRelay;
    PowerStateRelay *_powerRelay;
    NSMutableArray *_tcpProgressProbes;
    NSString *_clearSSID;
    NSString *_obscuredSSID;
    NSMutableDictionary *_history;
    NSMutableDictionary *_multiplier;
    AnalyticsWorkspace *_workspace;
    ImpoExpoService *_ieService;
    NSObject<OS_dispatch_source> *maintenanceTimer;
    AWDAgent *_awdAgent;
    _Bool _observingSystemSettingsRelay;
    id _foregroundObserver;
    id _wifiEpochObserver;
    id _relayReadyObserver;
    unsigned long long networkBlacklistTime;
    unsigned long long defRoutePacketsIn;
    id _foregroundAppObserver;
    _Bool _verifyDefaultGateway;
    NSMutableDictionary *_activeICMPProbes;
    NSMutableDictionary *_icmpProbeStates;
    long long _pingCount;
    long long _pingSuccessCount;
    double _interPingInterval;
    long long _pingBurstCount;
    double _interBurstInterval;
    double _pingTimeout;
    CARAutomaticDNDStatus *_automaticDNDStatus;
    unsigned long long _cellUsageAtBrokenEntry;
    unsigned long long _totalCellUsageInBroken;
    _Bool _systemForeground;
    _Bool _callInForeground;
    _Bool _dndWhileDriving;
    unsigned int _activationIdentifier;
    unsigned long long _stepper;
}

@property (nonatomic) _Bool systemForeground;
@property (nonatomic) _Bool callInForeground;
@property (nonatomic) _Bool dndWhileDriving;
@property (nonatomic) unsigned int activationIdentifier;
@property (nonatomic) unsigned long long stepper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)arg1;
+ (id)internalStateDictionary;
+ (long long)_nwInterfaceTypeFromAPSDQualifier:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_currentState;
- (id)_states;
- (void)_dumpState;
- (int)configureInstance:(id)arg1;
- (int)read:(id)arg1 returnedValues:(id)arg2;
- (void)generateInfoForId:(unsigned long long)arg1 context:(const char *)arg2 uuid:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)noteSymptom:(id)arg1;
- (void)_completeInitialization;
- (void)_bringStateToIdle;
- (void)_administrativeDisable;
- (void)_administrativeEnable;
- (id)internalStateDictionary;
- (void)_updateSSID:(id)arg1;
- (void)_idempotentInitializationFromIdleWithCellRelay:(id)arg1 wifiRelay:(id)arg2 rnfRelay:(id)arg3 powerRelay:(id)arg4;
- (void)_fetchDampeningHistory;
- (void)_idempotentInitializationFromIdle;
- (_Bool)subscribeCarKitNotifications;
- (void)_startMaintenanceTimerFor:(id)arg1 interval:(unsigned long long)arg2 capWindowTo:(unsigned long long)arg3;
- (_Bool)dampeningCheck;
- (void)_stopMaintenanceTimer;
- (void)_captureProgressFor:(id)arg1 since:(id)arg2 interval:(unsigned long long)arg3 capWindowTo:(unsigned long long)arg4 iteration:(unsigned long long)arg5 renewTest:(CDUnknownBlockType)arg6;
- (void)_postUpwards:(unsigned long long)arg1;
- (void)_performConnectivityTestToDefaultGateways:(id)arg1;
- (void)reportAutoBugCaptureCaseWithDomain:(id)arg1 type:(id)arg2 subtype:(id)arg3 subtypeContext:(id)arg4 events:(id)arg5;
- (void)drainPendingEventDescriptions;
- (void)_assessProgressFromBaseline:(struct xtcpprogress_indicators *)arg1 toMetrics:(struct xtcpprogress_indicators *)arg2;
- (void)resumedDefRouteProgress;
- (void)changedSSIDto:(id)arg1;
- (_Bool)_nudgeState;
- (void)dampeningReset;
- (void)dampeningSetPrecedent;
- (_Bool)processSymptom:(id)arg1;
- (void)apsdFailing:(_Bool)arg1 onInterface:(long long)arg2;
- (void)clientFeedback:(_Bool)arg1;
- (void)icmpPingProbe:(id)arg1 completedIterations:(unsigned long long)arg2 successfulCount:(unsigned long long)arg3 withError:(id)arg4;
- (id)initTestInstanceWithCellRelay:(id)arg1 wifiRelay:(id)arg2 rnfRelay:(id)arg3 powerRelay:(id)arg4;
- (void)_setClearSSID:(id)arg1;
- (void)_setObscuredSSID:(id)arg1;
- (void)addPendingEventDescription:(id)arg1;

@end
