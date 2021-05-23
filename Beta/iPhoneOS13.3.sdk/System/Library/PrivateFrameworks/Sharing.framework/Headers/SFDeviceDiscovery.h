/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, NSXPCConnection;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceDiscovery : NSObject

{
    _Bool _activateCalled;
    unsigned long long _activateTicks;
    NSObject<OS_dispatch_source> *_consoleUserTimer;
    struct NSMutableDictionary *_devices;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    _Bool _legacy;
    _Bool _timeoutFired;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSXPCConnection *_xpcCnx;
    _Bool _overrideScreenOff;
    _Bool _scanCache;
    _Bool _targetUserSession;
    _Bool _trackPeers;
    unsigned int _changeFlags;
    NSSet *_deviceFilter;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    unsigned long long _discoveryFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _fastScanMode;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_purpose;
    long long _rssiThreshold;
    long long _scanRate;
    long long _scanState;
    double _timeout;
    CDUnknownBlockType _timeoutHandler;
    long long _scanRateOverride;
    CDUnknownBlockType _scanStateChangedHandler;
}

@property (nonatomic) long long scanRateOverride;
@property (copy, nonatomic) CDUnknownBlockType scanStateChangedHandler;
@property (nonatomic) unsigned int changeFlags;
@property (copy, nonatomic) NSSet *deviceFilter;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property (nonatomic) unsigned long long discoveryFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) long long fastScanMode;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic) _Bool overrideScreenOff;
@property (copy, nonatomic) NSString *purpose;
@property (nonatomic) long long rssiThreshold;
@property (nonatomic) _Bool scanCache;
@property (nonatomic) long long scanRate;
@property (nonatomic, readonly) long long scanState;
@property (nonatomic) _Bool targetUserSession;
@property (nonatomic) double timeout;
@property (copy, nonatomic) CDUnknownBlockType timeoutHandler;
@property (nonatomic) _Bool trackPeers;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_interrupted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (int)_ensureXPCStarted;
- (void)deviceDiscoveryFoundDevice:(id)arg1;
- (void)deviceDiscoveryLostDevice:(id)arg1;
- (void)deviceDiscoveryDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)deviceDiscoveryScanStateChanged:(long long)arg1;
- (void)_invokeBlockActivateSafe:(CDUnknownBlockType)arg1;
- (void)_startTimeoutIfNeeded;
- (void)_timeoutTimerFired;
- (void)fastScanTrigger:(id)arg1;
- (void)fastScanCancel:(id)arg1;
- (void)_retryConsole;

@end
