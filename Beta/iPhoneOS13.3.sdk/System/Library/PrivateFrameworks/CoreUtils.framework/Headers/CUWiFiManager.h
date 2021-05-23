/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CURetrier, NSArray, NSString;

@protocol OS_dispatch_queue;

@interface CUWiFiManager : NSObject

{
    _Bool _activateCalled;
    _Bool _activated;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    _Bool _updating;
    NSArray *_trafficPeersCurrent;
    _Bool _wifiAutoJoinDisabled;
    struct __WiFiManagerClient *_wifiManager;
    _Bool _wifiManagerSetup;
    struct __WiFiDeviceClient *_wifiDevice;
    _Bool _wifiDeviceSetup;
    struct __WiFiNetwork *_wifiNetworkDisabled;
    CURetrier *_wifiRetrier;
    _Bool _wifiStateMonitorSetup;
    _Bool _infraDisabledChanged;
    _Bool _trafficPeerChanged;
    _Bool _wakeOnWirelessEnabledChanged;
    _Bool _infraDisabled;
    _Bool _wakeOnWirelessEnabled;
    unsigned int _wifiFlags;
    int _wifiState;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSArray *_trafficPeers;
    CDUnknownBlockType _wifiStateChangedHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) _Bool infraDisabled;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *trafficPeers;
@property (nonatomic) _Bool wakeOnWirelessEnabled;
@property (nonatomic, readonly) unsigned int wifiFlags;
@property (nonatomic, readonly) int wifiState;
@property (copy, nonatomic) CDUnknownBlockType wifiStateChangedHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_update;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_interrupted;
- (void)activate;
- (void)_activateSafeInvokeBlock:(CDUnknownBlockType)arg1;
- (void)performUpdate:(CDUnknownBlockType)arg1;
- (void)_updateInfraDisabled;
- (void)_updateTrafficPeers;
- (void)_updateTrafficPeersWithService:(unsigned int)arg1;
- (void)_updateWakeOnWireless;
- (void)_wifiEnsureStarted;
- (void)_wifiEnsureStopped;
- (void)_wifiAutoJoinNotification:(id)arg1;
- (unsigned int)_wifiFlagsUncached;
- (int)_wifiStateUncached;

@end
