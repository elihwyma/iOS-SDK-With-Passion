/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion, IDSService, NSMutableDictionary, NSString, NSTimer;

@interface PBBridgeIDSServiceDelegate : NSObject

{
    _Bool _shouldSuppressTransportReachabilityTimeout;
    IDSService *_service;
    NSTimer *_transportReachabilityTimer;
    NSMutableDictionary *_inflightMessages;
    NSMutableDictionary *_pendingMessages;
    BKSProcessAssertion *_suspendAssertion;
}

@property (retain, nonatomic) NSTimer *transportReachabilityTimer;
@property (retain, nonatomic) NSMutableDictionary *inflightMessages;
@property (retain, nonatomic) NSMutableDictionary *pendingMessages;
@property (retain, nonatomic) BKSProcessAssertion *suspendAssertion;
@property (retain, nonatomic) IDSService *service;
@property (nonatomic) _Bool shouldSuppressTransportReachabilityTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)serviceIdentifier;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 linkedDevicesChanged:(id)arg2;
- (void)endSetupTransaction;
- (id)sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(_Bool)arg5 retryCount:(long long)arg6 retryInterval:(double)arg7;
- (void)transportBecameReachable;
- (void)transportBecameUnreachable;
- (void)setupServiceMessageSelectorMappings;
- (id)customDescriptionOfMessageType:(unsigned short)arg1;
- (void)clearPowerAssertionIfNotPairing:(id)arg1;
- (id)_sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(_Bool)arg5;
- (void)startReachabilityTimer;
- (void)cancelReachabilityTimer;
- (void)checkReachability;
- (_Bool)connectionStateWithDevices:(id)arg1 accounts:(id)arg2;
- (void)reportConnectionForService:(id)arg1 accounts:(id)arg2 devices:(id)arg3;
- (void)updateConnectivityTimer:(id)arg1;
- (void)beginSetupTransaction;
- (void)resetTransportReachabilityTimer;

@end
