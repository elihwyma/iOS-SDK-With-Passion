/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <Foundation/NSObject.h>

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSMapTable, NSRecursiveLock, NSString, NSTimer, PCSimpleTimer;

@interface PCPersistentInterfaceManager : NSObject

{
    NSRecursiveLock *_lock;
    NSMapTable *_delegatesAndQueues;
    struct __CFSet *_WiFiAutoAssociationDelegates;
    PCSimpleTimer *_WiFiAutoAssociationDisableTimer;
    struct __CFSet *_wakeOnWiFiDelegates;
    PCSimpleTimer *_wakeOnWiFiDisableTimer;
    void *_interfaceAssertion;
    NSString *_WWANInterfaceName;
    _Bool _isWWANInterfaceUp;
    NSTimer *_inCallWWANOverrideTimer;
    _Bool _isWWANInterfaceDataActive;
    _Bool _ctIsWWANInHomeCountry;
    _Bool _hasWWANStatusIndicator;
    _Bool _isWWANInterfaceSuspended;
    _Bool _isPowerStateDetectionSupported;
    _Bool _isWWANInterfaceInProlongedHighPowerState;
    _Bool _isWWANInterfaceActivationPermitted;
    double _lastActivationTime;
    _Bool _isInCall;
    _Bool _isWakeOnWiFiSupported;
    _Bool _isWakeOnWiFiEnabled;
    CoreTelephonyClient *_ctClient;
    CTXPCServiceSubscriptionContext *_currentDataSimContext;
    void *_ctServerConnection;
}

@property (readonly) _Bool isPowerStateDetectionSupported;
@property (readonly) _Bool isWWANInterfaceInProlongedHighPowerState;
@property (readonly) _Bool isInCall;
@property (readonly) _Bool isWWANInterfaceActivationPermitted;
@property (readonly) _Bool areAllNetworkInterfacesDisabled;
@property (readonly) _Bool isWWANInterfaceUp;
@property (readonly) _Bool isWWANInHomeCountry;
@property (readonly) _Bool isWWANBetterThanWiFi;
@property (readonly) _Bool isWWANInterfaceSuspended;
@property (readonly) _Bool hasWWANStatusIndicator;
@property (readonly) _Bool doesWWANInterfaceExist;
@property (readonly) NSString *WWANInterfaceName;
@property (readonly) _Bool isInternetReachableViaWiFi;
@property (readonly) _Bool isWakeOnWiFiSupported;
@property (readonly) _Bool isInternetReachable;
@property (nonatomic, readonly) NSString *currentLinkQualityString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)handleMachMessage:(void *)arg1;
- (void)removeDelegate:(id)arg1;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)cutWiFiManagerDeviceAttached:(id)arg1;
- (void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3;
- (void)connectionActivationError:(id)arg1 connection:(int)arg2 error:(int)arg3;
- (void)currentDataSimChanged:(id)arg1;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)_createCTConnection;
- (void)_updateWWANInterfaceUpStateLocked;
- (void)_processCallStatusChanged:(id)arg1;
- (void)_processCurrentDataSimChangedLocked:(id)arg1;
- (void)_processConnectionStatusLocked:(id)arg1;
- (void)_processDataStatusLocked:(id)arg1;
- (void)_mainThreadCTConnectionAttempt;
- (void)_ctConnectionAttempt;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)_updateWWANInterfaceUpState;
- (void)_scheduleCalloutsForSelector:(SEL)arg1;
- (_Bool)_isCurrentDataSimContextLocked:(id)arg1;
- (void)_updateCTIsWWANInHomeCountry:(_Bool)arg1 isWWANInterfaceDataActive:(_Bool)arg2;
- (_Bool)_wantsWWANInterfaceAssertion;
- (_Bool)_isCellularCall:(struct __CTCall *)arg1;
- (void)_clearInCallWWANOverrideTimerLocked;
- (void)_inCallWWANOverrideTimerFired;
- (id)_nonCellularMonitor;
- (_Bool)_isWWANInHomeCountryLocked;
- (_Bool)_isInternetReachableLocked;
- (void)_adjustWakeOnWiFi;
- (_Bool)_wantsWakeOnWiFiEnabled;
- (void)_adjustWakeOnWiFiLocked;
- (_Bool)_isWiFiUsable;
- (_Bool)_allowBindingToWWAN;
- (void)bindCFStream:(struct __CFReadStream *)arg1 toWWANInterface:(_Bool)arg2;
- (id)urlConnectionBoundToWWANInterface:(_Bool)arg1 withRequest:(id)arg2 delegate:(id)arg3 usesCache:(_Bool)arg4 maxContentLength:(long long)arg5 startImmediately:(_Bool)arg6 connectionProperties:(id)arg7;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (_Bool)_wwanIsPoorLinkQuality;
- (_Bool)_wifiIsPoorLinkQuality;
- (void)_updateWWANInterfaceAssertions;
- (void)enableWiFiAutoAssociation:(_Bool)arg1 forDelegate:(id)arg2;
- (void)enableWakeOnWiFi:(_Bool)arg1 forDelegate:(id)arg2;
- (void)bindCFStreamToWWANInterface:(struct __CFReadStream *)arg1;
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(_Bool)arg3 maxContentLength:(long long)arg4 startImmediately:(_Bool)arg5 connectionProperties:(id)arg6;

@end
