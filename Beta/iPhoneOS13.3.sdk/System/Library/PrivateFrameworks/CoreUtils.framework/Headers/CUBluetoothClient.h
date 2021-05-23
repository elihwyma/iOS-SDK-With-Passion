/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CBCentralManager, CBPeripheralManager, NSData, NSString;

@protocol OS_dispatch_queue;

@interface CUBluetoothClient : NSObject

{
    NSData *_btAdvertisingAddress;
    CBCentralManager *_btCentralManager;
    _Bool _btCentralManagerNeeded;
    CBPeripheralManager *_btPeripheralManager;
    _Bool _btPeripheralManagerNeeded;
    struct {
        CDUnknownFunctionPointerType accessoryEvent;
        CDUnknownFunctionPointerType accessorySetupCommand;
    } _btAccessoryCallbacks;
    _Bool _btAccessoryEventsNeeded;
    _Bool _btAccessoryEventsRegistered;
    struct BTAccessoryManagerImpl *_btAccessoryManager;
    _Bool _btConnectionDevicesInitialized;
    _Bool _btConnectionEventsNeeded;
    struct BTSessionImpl *_btSession;
    _Bool _btSessionAddedServiceCallback;
    _Bool _btSessionAttaching;
    _Bool _btSessionNeeded;
    _Bool _btSessionStarted;
    struct BTLocalDeviceImpl *_btLocalDevice;
    NSData *_btLocalDeviceAddr;
    _Bool _btLocalDeviceAddrNeeded;
    struct {
        CDUnknownFunctionPointerType statusEvent;
        CDUnknownFunctionPointerType leTestStopped;
        CDUnknownFunctionPointerType afhMapChanged;
    } _btLocalDeviceCallbacks;
    _Bool _btLocalDeviceCallbacksNeeded;
    _Bool _btLocalDeviceCallbacksRegistered;
    struct BTPairingAgentImpl *_btPairingAgent;
    _Bool _btPairingAgentNeeded;
    _Bool _btPairingAgentStarted;
    struct NSMutableDictionary *_btConnectedDevices;
    struct NSMutableDictionary *_btPairedDevices;
    _Bool _btPairedDevicesInitialized;
    struct NSMutableArray *_findDeviceRequests;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    int _bluetoothState;
    unsigned int _flags;
    unsigned int _statusFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    CDUnknownBlockType _bluetoothAddressChangedHandler;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    CDUnknownBlockType _deviceConnectedHandler;
    CDUnknownBlockType _deviceDisconnectedHandler;
    CDUnknownBlockType _devicePairedHandler;
    CDUnknownBlockType _deviceUnpairedHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (nonatomic) int bluetoothState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned int statusFlags;
@property (copy, nonatomic) CDUnknownBlockType bluetoothAddressChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceConnectedHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceDisconnectedHandler;
@property (copy, nonatomic) CDUnknownBlockType devicePairedHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceUnpairedHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_invalidated;
- (void)_interrupted;
- (void)activate;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)findDeviceByAddress:(CDStruct_83abfce7)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_findDeviceByAddress:(CDStruct_83abfce7)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processFindDeviceRequests;
- (void)_btEnsureStarted;
- (void)_btEnsureStopped;
- (void)_btAccessoryPlacementChanged:(struct BTAccessoryManagerImpl *)arg1 device:(struct BTDeviceImpl *)arg2;
- (id)_createCUBluetoothDeviceWithBTDevice:(struct BTDeviceImpl *)arg1;
- (void)_handleBluetoothAddressChanged;
- (void)_handleConnectedDevicesInit;
- (void)_handleDeviceConnected:(struct BTDeviceImpl *)arg1;
- (void)_handleDeviceDisconnected:(struct BTDeviceImpl *)arg1;
- (void)_handlePairingStatusChanged;
- (void)updateDevice:(id)arg1 btDevice:(struct BTDeviceImpl *)arg2;
- (void)updateStatusFlags;

@end
