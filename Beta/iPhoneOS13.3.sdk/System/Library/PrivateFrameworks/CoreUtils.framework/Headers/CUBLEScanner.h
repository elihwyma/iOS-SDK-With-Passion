/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CBCentralManager, CUSystemMonitor, NSDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CUBLEScanner : NSObject

{
    _Bool _activateCalled;
    CBCentralManager *_centralManager;
    _Bool _changesPending;
    struct NSMutableDictionary *_devices;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    int _rssiThreshold;
    NSDictionary *_scanParametersCurrent;
    _Bool _scannerStartCalled;
    CUSystemMonitor *_systemMonitor;
    struct LogCategory *_ucat;
    int _bluetoothState;
    unsigned int _changeFlags;
    unsigned int _scanFlags;
    int _scanRate;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property (nonatomic) int bluetoothState;
@property (copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler;
@property (nonatomic) unsigned int changeFlags;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property int rssiThreshold;
@property (nonatomic) unsigned int scanFlags;
@property (nonatomic) int scanRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)_update;
- (void)_invalidated;
- (void)activate;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_updateIfNeededWithBlock:(CDUnknownBlockType)arg1;
- (id)_scanParameters;
- (id)_scanParametersSummary:(id)arg1;
- (_Bool)_shouldScan;
- (void)_stopScanIfNeededWithReason:(const char *)arg1;
- (void)_updateScanRules:(id *)arg1 payloadType:(unsigned char)arg2 rssiThreshold:(int)arg3;

@end
