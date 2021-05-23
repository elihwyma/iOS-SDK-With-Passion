/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <ATSocket.h>

@class ATIDSService, IDSDevice, IDSDeviceConnection;

@interface ATIDSSocket : ATSocket

{
    IDSDeviceConnection *_deviceConnection;
    unsigned int _wifiWriteBufferSize;
    unsigned int _btWriteBufferSize;
    IDSDevice *_device;
    ATIDSService *_service;
    long long _priority;
}

@property (nonatomic, readonly) IDSDevice *device;
@property (nonatomic, readonly) ATIDSService *service;
@property (nonatomic, readonly) long long priority;

- (void)dealloc;
- (_Bool)open;
- (void)connectWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDevice:(id)arg1 service:(id)arg2 priority:(long long)arg3;
- (void)addTransportUpgradeException;
- (void)removeTransportUpgradeException;
- (void)closeDescriptor;

@end
