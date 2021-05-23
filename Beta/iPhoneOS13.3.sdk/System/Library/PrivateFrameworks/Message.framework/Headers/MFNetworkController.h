/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class AWDMailNetworkDiagnosticsReport, CXCallObserver, CoreTelephonyClient, EFObservable, NSLock, NSMutableArray, NSMutableSet, NSString, RadiosPreferences;

@protocol OS_dispatch_queue;

@interface MFNetworkController : NSObject

{
    NSLock *_lock;
    struct __CFRunLoop *_rl;
    NSMutableArray *_observers;
    unsigned int _flags;
    _Bool _dns;
    unsigned long long _activeCalls;
    NSMutableSet *_backgroundWifiClients;
    struct __SCPreferences *_wiFiPreferences;
    _Bool _hasCellDataCapability;
    _Bool _hasWiFiCapability;
    _Bool _isWiFiEnabled;
    _Bool _isRoamingAllowed;
    _Bool _alternateAdviceState;
    RadiosPreferences *_radiosPreferences;
    NSObject<OS_dispatch_queue> *_prefsQueue;
    int _symptomsToken;
    CoreTelephonyClient *_ctc;
    NSObject<OS_dispatch_queue> *_dataStatusQueue;
    _Bool _cellularDataAvailable;
    struct __SCNetworkReachability *_reachability;
    struct __SCDynamicStore *_store;
    struct __CFRunLoopSource *_store_source;
    CXCallObserver *_callObserver;
    int _dataIndicator;
    void *_wifiManager;
}

@property (nonatomic) void *wifiManager;
@property (readonly) _Bool isDataAvailable;
@property (readonly) _Bool isNetworkUp;
@property (readonly) _Bool isFatPipe;
@property (readonly) _Bool isOnWWAN;
@property (readonly) _Bool inAirplaneMode;
@property (readonly) _Bool is3GConnection;
@property (readonly) _Bool is4GConnection;
@property (readonly) int dataIndicator;
@property (readonly) long long transportType;
@property (readonly) _Bool hasAlternateAdvice;
@property (nonatomic, readonly) EFObservable *networkObservable;
@property (nonatomic, readonly) EFObservable *wifiObservable;
@property (nonatomic, readonly) AWDMailNetworkDiagnosticsReport *awdNetworkDiagnosticReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)networkAssertionWithIdentifier:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)airplaneModeChanged;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)connectionActivationError:(id)arg1 connection:(int)arg2 error:(int)arg3;
- (void)preferredDataSimChanged:(id)arg1;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)copyDiagnosticInformation;
- (id)copyCarrierBundleValue:(id)arg1;
- (id)addNetworkObserverBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)_checkKeys:(id)arg1 forStore:(struct __SCDynamicStore *)arg2;
- (void)_inititializeWifiManager;
- (void)_setupSymptons;
- (void)_setDataStatus_nts:(id)arg1;
- (void)_updateActiveCalls;
- (void)_initializeDataStatus;
- (_Bool)_isNetworkUp_nts;
- (int)dataStatus;
- (_Bool)_simulationOverrideForType:(unsigned long long)arg1 actualValue:(_Bool)arg2;
- (id)_networkAssertionWithIdentifier:(id)arg1;
- (void)removeNetworkObserver:(id)arg1;
- (void)_updateWifiClientType;
- (void)_carrierBundleDidChange;
- (void)_setFlags:(unsigned int)arg1 forReachability:(struct __SCNetworkReachability *)arg2;
- (void)_handleWiFiNotification:(unsigned int)arg1;
- (void)addBackgroundWifiClient:(id)arg1;
- (void)removeBackgroundWifiClient:(id)arg1;

@end
