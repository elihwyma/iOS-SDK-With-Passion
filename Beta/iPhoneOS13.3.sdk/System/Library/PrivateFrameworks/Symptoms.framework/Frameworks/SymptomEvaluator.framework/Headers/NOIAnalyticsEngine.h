/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/AnalyticsEngineCore.h>

@class AWDSymptomsNetworkAnalyticsRRCConnectedPeriod, NSMutableDictionary, NSMutableSet, NetworkAnalyticsStateRelay;

__attribute__((visibility("hidden")))
@interface NOIAnalyticsEngine : AnalyticsEngineCore

{
    NSMutableDictionary *liveClients;
    NSMutableSet *managedNOIs;
    id _cellEpochObserver;
    id _wifiEpochObserver;
    id _wiredEpochObserver;
    id _modelTurndownObserver;
    id _cellStateChangeObserver;
    id _cellStateCapabilityObserver;
    id _cellFallbackObserver;
    id _considerAlternateUpdateObserver;
    id _primaryObserver;
    int notifyToken;
    _Bool xpcShutdown;
    NSMutableSet *_predictionQueryClients;
    unsigned long long _predictionQueryCount;
    unsigned long long _startConnectionTimestamp;
    unsigned long long _startBackgroundConnectionTimestamp;
    unsigned long long _lastDisconnectTimestamp;
    unsigned int _ingressLQM;
    unsigned long long _ingressUploadThroughput;
    unsigned long long _ingressDownloadThroughput;
    unsigned long long _ingressBytesIn;
    unsigned long long _ingressBytesOut;
    unsigned long long _ingressPacketsIn;
    unsigned long long _ingressPacketsOut;
    unsigned long long _lastDisconnectedSecs;
    _Bool _ingressInstantMetricAvailable;
    _Bool _ingressThroughputMetricAvailable;
    NetworkAnalyticsStateRelay *_cellRelay;
    NetworkAnalyticsStateRelay *_wifiRelay;
    NetworkAnalyticsStateRelay *_wiredRelay;
    AWDSymptomsNetworkAnalyticsRRCConnectedPeriod *_rrcConnectionMetric;
}

+ (id)queue;
+ (void)resetQueryStatistics;
+ (void)getQueryStatistics:(CDStruct_4bcfbbae *)arg1;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3;
- (void)subscribeToNOIsFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3 connection:(id)arg4;
- (void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 connection:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)unsubscribeToNOIs:(id)arg1 connection:(id)arg2;
- (void)clientEvent:(id)arg1 isAddEvent:(_Bool)arg2;
- (void)clientTransactionsRelease;
- (void)_bottomUpNOIEvent:(id)arg1 withInfo:(id)arg2;
- (_Bool)_initializeAllManagedNOIs;
- (void)_observeStateRelays;
- (void)_dumpClientStructure;
- (void)_updateRrcStateChangeTimestamp:(long long)arg1 forRrcState:(int)arg2;
- (void)_resetRRCMetricCounters;
- (void)l2ThroughputMetrics:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_evalPostingNotificationForNOI:(id)arg1 forEvent:(id)arg2 withInfo:(id)arg3;
- (id)_clientNOIEvent:(id)arg1 forNOIs:(id)arg2 isAddEvent:(_Bool)arg3;
- (id)_validatedNOIs:(id)arg1 orPredicate:(id)arg2;
- (void)_coreNOIMembershipChangeOn:(id)arg1 forNOIs:(id)arg2 isAddEvent:(_Bool)arg3;
- (void)_resetQueryStatistics;
- (void)_getQueryStatistics:(CDStruct_4bcfbbae *)arg1;
- (void)auditableLinkQuality:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)networkAttachmentInfo:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)estTransferTime:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)canUseOnAlternate:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;

@end
