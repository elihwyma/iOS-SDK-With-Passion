/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class CUMobileDeviceDiscovery, CUWiFiScanner, NSData, NSSet, NSString, SFDeviceDiscovery;

@protocol OS_dispatch_queue;

@interface RPLegacyDeviceDiscovery : NSObject

{
    _Bool _activateCalled;
    _Bool _activateInProgress;
    _Bool _activateCompleted;
    NSData *_blePayloadFilterData;
    NSData *_blePayloadFilterMask;
    struct NSMutableDictionary *_devices;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    _Bool _verifyDevices;
    SFDeviceDiscovery *_bleDiscovery;
    struct BonjourBrowser *_bonjourBrowser;
    CUMobileDeviceDiscovery *_mdDiscovery;
    _Bool _wifiAirPlayWAC;
    CUWiFiScanner *_wifiScanner;
    unsigned char _deviceActionType;
    _Bool _scanCache;
    _Bool _targetUserSession;
    unsigned int _changeFlags;
    int _rssiThreshold;
    unsigned int _scanRate;
    unsigned int _scanState;
    unsigned int _wifiScanFlags;
    NSSet *_deviceFilter;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_serviceType;
    double _timeout;
    NSString *_wifiSSID;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _scanStateChangedHandler;
    CDUnknownBlockType _timeoutHandler;
}

@property (nonatomic) unsigned int changeFlags;
@property (nonatomic) unsigned char deviceActionType;
@property (copy, nonatomic) NSSet *deviceFilter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) int rssiThreshold;
@property (nonatomic) _Bool scanCache;
@property (nonatomic) unsigned int scanRate;
@property (nonatomic, readonly) unsigned int scanState;
@property (copy, nonatomic) NSString *serviceType;
@property (nonatomic) _Bool targetUserSession;
@property (nonatomic) double timeout;
@property (nonatomic) unsigned int wifiScanFlags;
@property (copy, nonatomic) NSString *wifiSSID;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType scanStateChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType timeoutHandler;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (void)_invalidated;
- (void)_interrupted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_lostAllDevices;
- (int)_bonjourStart;
- (void)_bonjourHandleEventType:(unsigned int)arg1 info:(id)arg2;
- (void)_bonjourHandleAddOrUpdateDevice:(id)arg1;
- (void)_bonjourHandleRemoveDevice:(id)arg1;
- (int)_bleStart;
- (int)_mdStart;
- (int)_wifiStart;
- (void)_bleHandleDeviceFound:(id)arg1;
- (void)_bleHandleDeviceLost:(id)arg1;
- (void)_bleHandleDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)_foundDevice:(id)arg1;
- (void)_lostDeviceByIdentifier:(id)arg1;
- (void)_mdHandleDeviceFound:(id)arg1;
- (void)_mdHandleDeviceLost:(id)arg1;
- (void)_mdHandleDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)_wifiHandleDeviceFound:(id)arg1;
- (void)_wifiHandleDeviceLost:(id)arg1;
- (void)_wifiHandleDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)setBLEPayloadFilterData:(id)arg1 mask:(id)arg2;

@end
