/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CSBluetoothManager : NSObject

{
    _Bool _isAttachingBluetoothSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    struct BTSessionImpl *_bluetoothSession;
    struct BTLocalDeviceImpl *_localDevice;
    NSArray *_pairedDeviceAddresses;
    NSArray *_connectedDeviceAddresses;
    NSObject<OS_dispatch_group> *_bluetoothSessionSetupGroup;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) struct BTSessionImpl *bluetoothSession;
@property (nonatomic) _Bool isAttachingBluetoothSession;
@property (nonatomic) struct BTLocalDeviceImpl *localDevice;
@property (retain, nonatomic) NSArray *pairedDeviceAddresses;
@property (retain, nonatomic) NSArray *connectedDeviceAddresses;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *bluetoothSessionSetupGroup;

+ (id)sharedInstance;

- (id)init;
- (void)_attachBluetoothSession;
- (id)_getWirelessSplitterInfoFromLocalDevice:(struct BTLocalDeviceImpl *)arg1;
- (void)getBTLocalDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_tearDownLocalDevice;
- (void)_detachBluetoothSession;
- (void)_setUpLocalDevice;
- (void)getWirelessSplitterInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)device:(struct BTDeviceImpl *)arg1 serviceMask:(unsigned int)arg2 serviceEventType:(int)arg3 serviceSpecificEvent:(unsigned int)arg4 result:(int)arg5;
- (void)_sessionAttached:(struct BTSessionImpl *)arg1 result:(int)arg2;
- (void)_sessionDetached:(struct BTSessionImpl *)arg1;
- (void)_sessionTerminated:(struct BTSessionImpl *)arg1;
- (void)localDevice:(struct BTLocalDeviceImpl *)arg1 event:(int)arg2 result:(int)arg3;

@end
