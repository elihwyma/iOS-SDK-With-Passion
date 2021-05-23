/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSHashTable, NSMutableSet, NSString, NWNetworkOfInterestManager, NWPathEvaluator;

@protocol OS_dispatch_queue;

@interface ICEnvironmentMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_observers;
    unsigned int _powerNotificationRef;
    struct __CTServerConnection *_telephonyServerConnectionRef;
    NWPathEvaluator *_networkPathEvaluator;
    int _thermalNotificationToken;
    NWNetworkOfInterestManager *_noiManager;
    long long _cellularLinkQuality;
    void *_symptomPresentationFeedDyLibHandle;
    NSMutableSet *_networksOfInterest;
    _Bool _isCharging;
    _Bool _isRemoteServerLikelyReachable;
    _Bool _isWiFiActive;
    _Bool _currentNetworkLinkHighQuality;
    _Bool _wifiAssociated;
    _Bool _networkConstrained;
    _Bool _ethernetWired;
    _Bool _remoteServerReachable;
    NSString *_telephonyOperatorName;
    NSString *_telephonyRegistrationStatus;
    NSString *_telephonyStatusIndicator;
    double _currentBatteryLevel;
    long long _networkType;
    long long _lastKnownNetworkType;
    unsigned long long _currentThermalLevel;
}

@property (nonatomic, readonly, getter=isCharging) _Bool charging;
@property (nonatomic, readonly) long long networkType;
@property (nonatomic, readonly) long long lastKnownNetworkType;
@property (nonatomic, readonly, getter=isRemoteServerReachable) _Bool remoteServerReachable;
@property (nonatomic, readonly, getter=isRemoteServerLikelyReachable) _Bool remoteServerLikelyReachable;
@property (nonatomic, readonly, getter=isCurrentNetworkLinkHighQuality) _Bool currentNetworkLinkHighQuality;
@property (nonatomic, readonly, getter=isWiFiAssociated) _Bool wifiAssociated;
@property (nonatomic, readonly, getter=isEthernetWired) _Bool ethernetWired;
@property (nonatomic, readonly, getter=isWiFiActive) _Bool wiFiActive;
@property (nonatomic, readonly, getter=isNetworkConstrained) _Bool networkConstrained;
@property (nonatomic, readonly) unsigned long long currentThermalLevel;
@property (nonatomic, readonly) double currentBatteryLevel;
@property (copy, nonatomic, readonly) NSString *telephonyStatusIndicator;
@property (copy, nonatomic, readonly) NSString *telephonyOperatorName;
@property (copy, nonatomic, readonly) NSString *telephonyRegistrationStatus;

+ (id)sharedMonitor;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1;
- (_Bool)_networkConstrained;
- (void)didStopTrackingNOI:(id)arg1;
- (void)didStartTrackingNOI:(id)arg1;
- (void)didStopTrackingAllNOIs:(id)arg1;
- (long long)_currentNetworkType;
- (_Bool)_isWiFiAssociated;
- (void)_updatePowerStateWithService:(unsigned int)arg1 shouldNotifyObservers:(_Bool)arg2;
- (void)_onQueue_updateTelephonyStateAndNotifyObservers:(_Bool)arg1;
- (void)_handleApplicationDidEnterForegroundNotification:(id)arg1;
- (void)_onQueue_updateNetworkReachabilityAndNotifyObservers:(_Bool)arg1;
- (void)_onQueue_loadInitialThermalLevel;
- (void)_onQueue_updateThermalLevelWithToken:(int)arg1;
- (long long)_currentCellularLinkQuality;
- (long long)_networkTypeFromTelephonyStatusIndicator:(id)arg1;
- (long long)_networkTypeFromWatchCarousel;
- (void)_handleCTServerConnectionNotification:(id)arg1 userInfo:(id)arg2;

@end
