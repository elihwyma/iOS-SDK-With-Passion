/*
 Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
 */

#import <Foundation/NSObject.h>

@class CBCentralManager, CBPeripheral, CBScalablePipe, CBScalablePipeManager, NSString;

@protocol NFMLLeashBreakDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NFMLeashManager : NSObject

{
    CDUnknownBlockType _proximityChangeHandler;
    NSObject<OS_dispatch_queue> *_centralQueue;
    _Bool _testMode;
    _Bool _connected;
    _Bool _needsToScanForPeripheral;
    long long _leashMode;
    NSString *_serviceUUID;
    NSString *_leashIdentifier;
    CBScalablePipeManager *_pipeManager;
    CBScalablePipe *_pipe;
    CBCentralManager *_centralManager;
    CBPeripheral *_peripheral;
    CBPeripheral *_discoveredPeripheral;
    long long _centralPhase;
    id <NFMLLeashBreakDelegate> _leashDelegate;
    NSObject<OS_dispatch_source> *_leashDispatchSourceTimer;
    NSObject<OS_dispatch_queue> *_externalQueue;
}

@property (nonatomic) _Bool connected;
@property (retain, nonatomic) CBScalablePipeManager *pipeManager;
@property (retain, nonatomic) CBScalablePipe *pipe;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) CBPeripheral *peripheral;
@property (retain, nonatomic) CBPeripheral *discoveredPeripheral;
@property (nonatomic) long long centralPhase;
@property (nonatomic) _Bool needsToScanForPeripheral;
@property (weak, nonatomic) id <NFMLLeashBreakDelegate> leashDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *leashDispatchSourceTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue;
@property (nonatomic) long long leashMode;
@property (copy, nonatomic) NSString *serviceUUID;
@property (copy, nonatomic) NSString *leashIdentifier;
@property (nonatomic) _Bool testMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)connect;
- (void)update:(id)arg1;
- (void)peripheralDidUpdateRSSI:(id)arg1 error:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;
- (void)scalablePipeManagerDidUpdateState:(id)arg1;
- (void)leashTest;
- (void)beginMonitoringLeash;
- (void)stopMonitoringLeash;
- (void)setProximityChangeHandler:(CDUnknownBlockType)arg1;

@end
