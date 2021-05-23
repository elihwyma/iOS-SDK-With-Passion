/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class CBCentralManager, CURetrier, NSArray, NSData, NSSet, NSString, WPAWDL, WPNearby, WPPairing;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFBLEScanner : NSObject

{
    _Bool _activateCalled;
    _Bool _activated;
    _Bool _activeScan;
    struct BTSessionImpl *_btSession;
    _Bool _btStarted;
    CBCentralManager *_centralManager;
    struct NSMutableDictionary *_devices;
    _Bool _invalidateCalled;
    NSObject<OS_dispatch_source> *_lostTimer;
    _Bool _needDups;
    long long _payloadType;
    _Bool _poweredOffSleep;
    int _rescanSecondsActual;
    NSObject<OS_dispatch_source> *_rescanTimer;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_rssiEventLogFile;
    _Bool _scanStarted;
    CURetrier *_startRetrier;
    _Bool _timeoutFired;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSSet *_trackedPeersApplied;
    struct LogCategory *_ucat;
    _Bool _updating;
    _Bool _scanParamActive;
    _Bool _scanParamCache;
    _Bool _scanParamDups;
    NSData *_scanParamFilterData;
    NSData *_scanParamFilterMask;
    long long _scanParamInterval;
    long long _scanParamWindow;
    long long _scanParamMode;
    NSArray *_scanParamPeers;
    long long _scanParamRSSI;
    WPAWDL *_wpAirDrop;
    WPNearby *_wpNearby;
    long long _wpNearbyType;
    WPPairing *_wpPairing;
    _Bool _rssiLog;
    _Bool _rssiLogStdOut;
    _Bool _scanCache;
    unsigned int _changeFlags;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    NSArray *_deviceFilter;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSData *_payloadFilterData;
    NSData *_payloadFilterMask;
    double _rescanInterval;
    long long _rssiThreshold;
    long long _scanInterval;
    long long _scanRate;
    long long _scanState;
    CDUnknownBlockType _scanStateChangedHandler;
    long long _scanWindow;
    double _timeout;
    CDUnknownBlockType _timeoutHandler;
    NSSet *_trackedPeers;
}

@property (copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler;
@property (nonatomic) unsigned int changeFlags;
@property (copy, nonatomic) NSArray *deviceFilter;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic, readonly) NSData *payloadFilterData;
@property (copy, nonatomic, readonly) NSData *payloadFilterMask;
@property (nonatomic) double rescanInterval;
@property (nonatomic) _Bool rssiLog;
@property (nonatomic) _Bool rssiLogStdOut;
@property (nonatomic) long long rssiThreshold;
@property (nonatomic) _Bool scanCache;
@property (nonatomic) long long scanInterval;
@property (nonatomic) long long scanRate;
@property (nonatomic, readonly) long long scanState;
@property (copy, nonatomic) CDUnknownBlockType scanStateChangedHandler;
@property (nonatomic) long long scanWindow;
@property (nonatomic) double timeout;
@property (copy, nonatomic) CDUnknownBlockType timeoutHandler;
@property (copy, nonatomic) NSSet *trackedPeers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (id)initWithType:(long long)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)performUpdate:(CDUnknownBlockType)arg1;
- (void)_invokeBlockActivateSafe:(CDUnknownBlockType)arg1;
- (void)_restartIfNeeded:(_Bool)arg1;
- (void)nearbyDidUpdateState:(id)arg1;
- (void)nearby:(id)arg1 didStartScanningForType:(long long)arg2;
- (void)nearby:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4 peerInfo:(id)arg5;
- (void)nearby:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3;
- (void)awdlDidUpdateState:(id)arg1;
- (void)awdlStartedScanning:(id)arg1;
- (void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3;
- (void)nearby:(id)arg1 didFailToStartScanningForType:(long long)arg2 WithError:(id)arg3;
- (void)pairingDidUpdateState:(id)arg1;
- (void)pairingStartedScanning:(id)arg1;
- (void)pairing:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4 peerInfo:(id)arg5;
- (void)_rssiLogClose;
- (int)_btSessionEnsureStarted;
- (void)_rssiLogOpen;
- (void)_restartIfNeeded;
- (void)_updateTrackedPeers;
- (void)_btSessionEnsureStopped;
- (_Bool)_updateCounterpart:(id)arg1;
- (_Bool)_needActiveScan;
- (_Bool)_needDups;
- (void)_updateRescanTimer;
- (void)_removeAllDevicesWithReason:(id)arg1;
- (void)_rescanLostFired;
- (void)_startTimeoutIfNeeded;
- (void)_timeoutTimerFired;
- (void)_rescanTimerFired;
- (void)_poweredOn;
- (void)_poweredOff;
- (void)_watchSetupParseName:(id)arg1 fields:(id)arg2;
- (void)_foundDevice:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 fields:(id)arg4;
- (void)_nearbyParseManufacturerData:(id)arg1 fields:(id)arg2;
- (void)_nearbyParseNearbyActionPtr:(const char *)arg1 end:(const char *)arg2 fields:(id)arg3;
- (void)_nearbyParseNearbyInfoPtr:(const char *)arg1 end:(const char *)arg2 fields:(id)arg3;
- (id)pairingParsePayload:(id)arg1 identifier:(id)arg2 bleDevice:(id)arg3;
- (unsigned int)statusToHeadsetStatus:(unsigned char)arg1;
- (id)modelWithProductID:(unsigned short)arg1;
- (void)parseStatus3:(unsigned char)arg1 productID:(unsigned int)arg2 caseLEDColor:(char *)arg3 caseLEDStatus:(char *)arg4;
- (_Bool)pairingUpdatePairedInfo:(id)arg1 fields:(id)arg2 bleDevice:(id)arg3;
- (void)setPayloadFilterData:(id)arg1 mask:(id)arg2;

@end
