/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <ATMessageLinkListener.h>

@class ATIDSConnectionInfo, IDSService, NSMutableArray, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface ATIDSService : ATMessageLinkListener

{
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_service;
    ATIDSConnectionInfo *_connectionInfo;
    NSMutableArray *_listeners;
    _Bool _running;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)openSocketPriorityFromATPendingChangePriority:(int)arg1;

- (void)stop;
- (_Bool)start;
- (id)initWithServiceName:(id)arg1;
- (id)pairedDevice;
- (_Bool)hasPairedDevice;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)_connect;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)_cancelPendingConnectionRequests;
- (void)_scheduleConnectWithPriority:(long long)arg1;
- (id)_messageTypeToString:(int)arg1;
- (void)_scheduleReconnect;
- (void)setPreferWifi:(_Bool)arg1;
- (void)_sendWakeup;
- (void)socket:(id)arg1 hasDataAvailable:(const char *)arg2 length:(long long)arg3;
- (void)socketDidClose:(id)arg1;
- (id)deviceForId:(id)arg1;
- (void)requestConnectionToPairedDeviceWithPriority:(long long)arg1;

@end
