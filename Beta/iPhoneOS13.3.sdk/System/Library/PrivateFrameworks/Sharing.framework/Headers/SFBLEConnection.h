/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class CURetrier, NSMutableSet, NSString, SFBLEData, SFBLEDevice, WPNearby;

@protocol OS_dispatch_queue;

@interface SFBLEConnection : NSObject

{
    _Bool _acceptor;
    _Bool _activateCalled;
    NSMutableSet *_clients;
    _Bool _connected;
    _Bool _connecting;
    double _connectStartTime;
    CURetrier *_connectRetrier;
    SFBLEData *_currentData;
    struct NSMutableArray *_dataSendQueue;
    _Bool _invalidateCalled;
    WPNearby *_wpNearby;
    struct LogCategory *_ucat;
    _Bool _bleEncrypted;
    _Bool _latencyCritical;
    _Bool _lePipeCapable;
    CDUnknownBlockType _bluetoothBandwidthChangedHandler;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    CDUnknownBlockType _connectionStateChangedHandler;
    CDUnknownBlockType _dataHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    SFBLEDevice *_peerDevice;
}

@property (nonatomic) _Bool bleEncrypted;
@property (nonatomic) _Bool latencyCritical;
@property (nonatomic) _Bool lePipeCapable;
@property (retain, nonatomic) SFBLEDevice *peerDevice;
@property (nonatomic) _Bool acceptor;
@property (copy, nonatomic) CDUnknownBlockType bluetoothBandwidthChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler;
@property (nonatomic, readonly) long long connectionState;
@property (copy, nonatomic) CDUnknownBlockType connectionStateChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType dataHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (void)activate;
- (void)addClient:(id)arg1;
- (_Bool)removeClient:(id)arg1;
- (void)nearbyDidUpdateState:(id)arg1;
- (void)nearbyDidChangeBluetoothBandwidthState:(id)arg1;
- (void)nearby:(id)arg1 didConnectToPeer:(id)arg2 transport:(long long)arg3 error:(id)arg4;
- (void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3;
- (void)nearby:(id)arg1 didSendData:(id)arg2 toPeer:(id)arg3 error:(id)arg4;
- (void)nearby:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)_connectIfNeeded;
- (void)_processQueuedData;
- (void)_cleanupQueuedData:(int)arg1;
- (void)sendDataDirect:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDevice:(id)arg1 acceptor:(_Bool)arg2;
- (void)activateDirect;
- (void)sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
