/*
 Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, WPAirPlaySolo;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface APAdvertiserBTLEManager : NSObject

{
    struct {
        unsigned char flags;
        unsigned char config;
        unsigned char ipv4[4];
    } _advertisementData;
    unsigned short _btleMode;
    _Bool _isP2PAllowed;
    _Bool _p2pSolo;
    _Bool _p2pSoloQueried;
    NSObject<OS_dispatch_source> *_p2pSoloQueryTimer;
    _Bool _isAdvertising;
    _Bool _isScanning;
    _Bool _isEnabled;
    unsigned char _seed;
    int _touchSetupActiveNotifyToken;
    WPAirPlaySolo *_btleServer;
    void *_eventHandlerContext;
    CDUnknownFunctionPointerType _eventHandlerFunc;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    struct OpaqueAPAdvertiserBTLEManager *_managerRef;
    struct __SCDynamicStore *_scStore;
    NSMutableDictionary *_soloDevices;
    NSObject<OS_dispatch_source> *_staleDevicesTimer;
}

@property (retain, nonatomic) WPAirPlaySolo *btleServer;
@property (nonatomic) void *eventHandlerContext;
@property (nonatomic) CDUnknownFunctionPointerType eventHandlerFunc;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *eventQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) _Bool isAdvertising;
@property (nonatomic) _Bool isScanning;
@property (nonatomic) _Bool isEnabled;
@property (nonatomic) struct OpaqueAPAdvertiserBTLEManager *managerRef;
@property (nonatomic) struct __SCDynamicStore *scStore;
@property (nonatomic) unsigned char seed;
@property (retain, nonatomic) NSMutableDictionary *soloDevices;
@property (nonatomic) NSObject<OS_dispatch_source> *staleDevicesTimer;
@property (nonatomic) int touchSetupActiveNotifyToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (int)stop;
- (int)start;
- (int)update;
- (int)updatePreferences;
- (void)dispatchEvent:(unsigned int)arg1;
- (void)stopAdvertising;
- (void)startScanning;
- (void)stopScanning;
- (void)airPlaySoloDidUpdateState:(id)arg1;
- (void)airPlaySoloStartedAdvertising:(id)arg1;
- (void)airPlaySoloStoppedAdvertising:(id)arg1;
- (void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
- (void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)airPlaySoloStartedScanning:(id)arg1;
- (void)airPlaySoloStoppedScanning:(id)arg1;
- (void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)startAdvertising;
- (int)setBTLEMode:(unsigned short)arg1;
- (int)getBTLEMode:(unsigned short *)arg1;
- (int)startP2PSoloQueryTimer;
- (void)handleP2PSoloQueryTimerFired;
- (void)handleP2PSoloQueryTimerCancelled;
- (int)updateSupportsSoloAndForceReadFromPrefs:(_Bool)arg1;
- (int)supportsSolo:(_Bool *)arg1;
- (id)stringForBTLEMode:(unsigned short)arg1;
- (int)setIsP2PAllowed:(_Bool)arg1;
- (int)setProperty:(id)arg1 withValue:(id)arg2;
- (int)startListeningForNetworkChanges;
- (int)stopListeningForNetworkChanges;
- (int)startStaleDeviceTimer;
- (void)updateAdvertisementData;
- (int)showDebugWithDataBuffer:(CDStruct_77a0ff72 *)arg1 verbose:(_Bool)arg2;

@end
