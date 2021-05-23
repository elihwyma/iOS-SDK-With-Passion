/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class CBCentralManager, CBScalablePipe, CBScalablePipeManager, NSData, NSDate, NSMutableData, NSString, SFBLEData;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFBLEPipe : NSObject

{
    _Bool _activateCalled;
    CBCentralManager *_btCentral;
    struct channel *_btChannel;
    _Bool _btConnected;
    _Bool _btConnecting;
    _Bool _btEndpointRegistering;
    _Bool _btEndpointRegistered;
    int _btFD;
    unsigned char _btReadHeader[4];
    NSMutableData *_btReadPayload;
    unsigned long long _btReadLen;
    unsigned long long _btReadOffset;
    struct channel_ring_desc *_btReadRing;
    NSObject<OS_dispatch_source> *_btReadSource;
    NSData *_btWriteData;
    SFBLEData *_btWriteItem;
    unsigned long long _btWriteLen;
    unsigned long long _btWriteOffset;
    const char *_btWritePtr;
    struct NSMutableArray *_btWriteQueue;
    struct channel_ring_desc *_btWriteRing;
    NSObject<OS_dispatch_source> *_btWriteSource;
    _Bool _btWriteSuspended;
    CBScalablePipe *_btPipe;
    CBScalablePipeManager *_btPipeManager;
    struct NSMutableDictionary *_frameHandlers;
    _Bool _invalidateCalled;
    NSDate *_lastDisconnectDate;
    struct LogCategory *_ucat;
    _Bool _manualConnect;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    CDUnknownBlockType _connectionStateChangedHandler;
    CDUnknownBlockType _frameHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_identifier;
    CDUnknownBlockType _invalidationHandler;
}

@property (copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler;
@property (nonatomic, readonly) long long connectionState;
@property (copy, nonatomic) CDUnknownBlockType connectionStateChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType frameHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic) _Bool manualConnect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (void)activate;
- (void)_readHandler;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;
- (void)scalablePipeManagerDidUpdateState:(id)arg1;
- (void)_tearDownPipe;
- (void)_setupIfNeeded;
- (void)_sendFrameType:(unsigned char)arg1 payload:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_writeHandler;
- (id)_defaultPairedDeviceBluetoothIdentifier;
- (void)_frameHandler:(unsigned char)arg1 data:(id)arg2;
- (void)_setupPipe:(id)arg1;
- (void)postedConnectionStateChanged;
- (void)addFrameHandlerForType:(unsigned char)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeFrameHandlerForType:(unsigned char)arg1;
- (void)sendFrameType:(unsigned char)arg1 payload:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
