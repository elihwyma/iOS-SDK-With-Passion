/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@protocol CXCallSourceDelegate, CXProviderVendorProtocol, OS_dispatch_queue;

@interface CXCallSource : NSObject

{
    _Bool _connected;
    id <CXCallSourceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id <CXProviderVendorProtocol> vendorProtocolDelegate;
@property (nonatomic, getter=isConnected) _Bool connected;
@property (weak, nonatomic) id <CXCallSourceDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly, getter=isPermittedToUsePublicAPI) _Bool permittedToUsePublicAPI;
@property (nonatomic, readonly, getter=isPermittedToUsePrivateAPI) _Bool permittedToUsePrivateAPI;
@property (nonatomic, readonly, getter=isPermittedToUseBluetoothAccessories) _Bool permittedToUseBluetoothAccessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (oneway void)actionCompleted:(id)arg1;
- (oneway void)commitTransaction:(id)arg1;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)handleAudioSessionActivationStateChangedTo:(_Bool)arg1;
- (oneway void)registerWithConfiguration:(id)arg1;
- (oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
- (oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;
- (oneway void)reportAudioFinishedForCallWithUUID:(id)arg1;
- (oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;
- (oneway void)requestTransaction:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)beginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reportCallWithUUID:(id)arg1 updated:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)reportAudioFinishedForCallWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)actionCompleted:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
