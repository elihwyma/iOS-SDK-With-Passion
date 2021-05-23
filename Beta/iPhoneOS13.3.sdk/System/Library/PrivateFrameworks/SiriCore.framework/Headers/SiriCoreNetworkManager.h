/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSNumber, SiriCoreLinkRecommendationInfo, SiriCoreWiFiManagerClient, WRM_iRATInterface;

@protocol OS_dispatch_queue, OS_nw_path_evaluator;

@interface SiriCoreNetworkManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    int _pathStatus;
    _Bool _pathUsesCellular;
    SiriCoreWiFiManagerClient *_wiFiManagerClient;
    _Bool _hasSymptomsBasedInstantCellQuality;
    _Bool _symptomsBasedInstantCellQualityIsGood;
    _Bool _hasSymptomsBasedInstantWiFiQuality;
    _Bool _symptomsBasedInstantWiFiQualityIsGood;
    _Bool _hasSymptomsBasedHistoricalCellQuality;
    _Bool _symptomsBasedHistoricalCellQualityIsGood;
    _Bool _hasSymptomsBasedHistoricalWiFiQuality;
    _Bool _symptomsBasedHistoricalWiFiQualityIsGood;
    _Bool _lastFetchInProgress;
    double _lastSuccessfulSymptomsFetch;
    NSNumber *_lastSignalStrength;
    unsigned long long _subscriptionCount;
    WRM_iRATInterface *_interface;
    _Bool _iRATCallInProgress;
    unsigned long long _iRATCallNumber;
    double _lastiRATFetch;
    SiriCoreLinkRecommendationInfo *_linkRecommendationInfo;
    SiriCoreLinkRecommendationInfo *_linkMetricsInfo;
}

+ (id)sharedInstance;
+ (long long)connectionSubTypeForCellularInterface;
+ (void)_ifnameTypeForName:(char *)arg1 isWiFi:(_Bool *)arg2 isCellular:(_Bool *)arg3;
+ (void)getCarrierName:(id *)arg1 signalStrength:(id *)arg2 subscriptionCount:(id *)arg3;
+ (id)connectionTypeForInterfaceName:(id)arg1 isCellular:(_Bool)arg2;
+ (long long)connectionTypeForInterface:(id)arg1;
+ (void)acquireDormancySuspendAssertion:(const void **)arg1;
+ (void)releaseDormancySuspendAssertion:(void *)arg1;

- (void)dealloc;
- (id)_init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_stopMonitoringNetwork;
- (void)_pathUpdated:(id)arg1;
- (void)_getNetworkPerformanceFeed;
- (long long)_reportCellularInstantQuality;
- (long long)_reportCellularHistoricalQuality;
- (long long)_reportWiFiInstantQuality;
- (long long)_reportWiFiHistoricalQuality;
- (void)getSignalStrength:(id *)arg1 subscriptionCount:(unsigned long long *)arg2;
- (void)releaseWiFiAssertion;
- (id)_wiFiManagerClient;
- (void)acquireWiFiAssertion:(long long)arg1;
- (_Bool)_defaultBTLinkRecommendation;
- (_Bool)_defaultWiFiLinkRecommendation;
- (void)_subscribeToLinkRecommendations:(id)arg1;
- (void)_getLinkRecommendationSafe:(_Bool)arg1 recommendation:(CDUnknownBlockType)arg2;
- (void)resetLinkMetrics;
- (void)startMonitoringNetworkForHost:(id)arg1;
- (void)stopMonitoringNetwork;
- (void)getNetworkPerformanceFeed;
- (long long)cellularNetworkQuality;
- (long long)wifiNetworkQuality;
- (long long)anyNetworkQuality;
- (void)getQualityReport:(CDUnknownBlockType)arg1;
- (void)forceFastDormancy;
- (void)registerWithWirelessCoexManager;
- (void)deRegisterWithWirelessCoexManager;
- (void)getLinkRecommendation:(_Bool)arg1 recommendation:(CDUnknownBlockType)arg2;
- (void)updateLinkMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_getConnectionSuccessRate:(id)arg1 hasMetric:(_Bool *)arg2;

@end
