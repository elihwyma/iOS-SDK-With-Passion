/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class IDSService, NSString;

@protocol NNMKSyncServiceTransportDelegate;

@interface NNMKSyncServiceIDSTransport : NSObject

{
    IDSService *_idsService;
    unsigned long long _connectivityState;
    id <NNMKSyncServiceTransportDelegate> _delegate;
    NSString *_serviceName;
}

@property (retain, nonatomic) IDSService *idsService;
@property (nonatomic) unsigned long long connectivityState;
@property (weak, nonatomic) id <NNMKSyncServiceTransportDelegate> delegate;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool forceFailureForAllRequests;
@property (nonatomic) _Bool simulateCloudConnectedOnly;

- (void)dealloc;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)serviceSpaceDidBecomeAvailable:(id)arg1;
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeoutCategory:(unsigned long long)arg4 allowCloudDelivery:(_Bool)arg5;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 allowCloudDelivery:(_Bool)arg5;
- (unsigned long long)_connectivityState;
- (double)_timeIntervalFromTimeoutCategory:(unsigned long long)arg1;
- (void)_handleConnectivityChange;

@end
