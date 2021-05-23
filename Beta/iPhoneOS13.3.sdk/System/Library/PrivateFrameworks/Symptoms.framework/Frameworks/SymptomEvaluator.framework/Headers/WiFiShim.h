/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source, WiFiShimDelegate;

__attribute__((visibility("hidden")))
@interface WiFiShim : NSObject

{
    struct __WiFiManagerClient *_wifiManager;
    struct __WiFiDeviceClient *_wifiDevice;
    struct __WiFiDeviceClient *_awdlDevice;
    _Bool _registeredForCallbacks;
    unsigned char _lqmCallbackRegistrationAttempts;
    id _tdObserver;
    _Bool _awdlLinkUp;
    _Bool _monitorBradycardia;
    unsigned char _lqmCallbacks;
    unsigned char _lqmCallbackThreshold;
    unsigned char _lqmBradycardia;
    _Bool _registeredForLQMCallbacks;
    _Bool _hasAssociation;
    _Bool _apIsAwake;
    _Bool _lqmCallbackBradycardiaTimerResumed;
    BOOL _awdlLinkState;
    int _lqmEventInterval;
    id <WiFiShimDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_lqmCallbackBradycardiaTimer;
    double _lqmBradycardiaLastCalled;
    NSDictionary *_awdlStateDict;
    NSObject<OS_dispatch_source> *_awdlTimer;
    long long _awdlTimerCount;
    NSString *_lastSsid;
    NSString *_lastBssid;
}

@property (nonatomic) unsigned char lqmCallbacks;
@property (nonatomic) unsigned char lqmCallbackThreshold;
@property (nonatomic) unsigned char lqmBradycardia;
@property (nonatomic) int lqmEventInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) _Bool registeredForLQMCallbacks;
@property (nonatomic) _Bool hasAssociation;
@property (nonatomic) _Bool apIsAwake;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *lqmCallbackBradycardiaTimer;
@property (nonatomic) _Bool lqmCallbackBradycardiaTimerResumed;
@property (nonatomic) double lqmBradycardiaLastCalled;
@property (retain, nonatomic) NSDictionary *awdlStateDict;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *awdlTimer;
@property (nonatomic) long long awdlTimerCount;
@property (nonatomic) BOOL awdlLinkState;
@property (nonatomic) struct __WiFiDeviceClient *awdlDevice;
@property (retain, nonatomic) NSString *lastSsid;
@property (retain, nonatomic) NSString *lastBssid;
@property (retain, nonatomic) id <WiFiShimDelegate> delegate;
@property (readonly) _Bool awdlLinkUp;
@property (nonatomic) _Bool monitorBradycardia;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct __WiFiManagerClient *)wifiManager;
- (struct __WiFiDeviceClient *)wifiDevice;
- (void)setWifiDevice:(struct __WiFiDeviceClient *)arg1;
- (void)_triggerDisconnectEdge:(id)arg1;
- (_Bool)toggleLQMIntervalOn:(id)arg1 toFast:(_Bool)arg2;
- (id)ssidForInterfaceWithName:(id)arg1;
- (id)bssidForInterfaceWithName:(id)arg1;
- (long long)phyModeForInterfaceWithName:(id)arg1;
- (_Bool)isHotSpotOnInterfaceWithName:(id)arg1;
- (id)getAWDLPeerList;
- (void)registerForCallbacks;
- (void)unregisterForCallbacks;
- (void)_setLQMEventInterval:(int)arg1;
- (void)changeLQMBradycardiaMonitoring;
- (void)_unregisterForLQMCallbacks;
- (void)setAWDLDevice:(struct __WiFiDeviceClient *)arg1;
- (void)checkForLQMCallbackRegistration;
- (_Bool)_shouldRegisterForLQMCallbacks;
- (void)_registerForLQMCallbacks;
- (void)_setAWDLLinkUp:(_Bool)arg1;
- (id)awdlPeerList;
- (void)resumeLQMCallbackBradycardiaMonitoring;
- (void)suspendLQMCallbackBradycardiaMonitoring;
- (void)_wifiDevicesRefresh;
- (void)_delayedRegisterForLQMCallbacks;
- (void)handleAWDLStateChange:(id)arg1;

@end
