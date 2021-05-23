/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSMapTable, NSString, NSXPCConnection, TUCallCapabilitiesState;

@protocol OS_dispatch_queue;

@interface TUCallCapabilitiesXPCClient : NSObject <Swift>

{
    int _token;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSMapTable *_delegateToQueue;
    TUCallCapabilitiesState *_state;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic, readonly) int token;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (retain, nonatomic) TUCallCapabilitiesState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)callCapabilitiesServerXPCInterface;
+ (id)callCapabilitiesClientXPCInterface;
+ (id)asynchronousServer;
+ (void)setAsynchronousServer:(id)arg1;
+ (id)synchronousServer;
+ (void)setSynchronousServer:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)handleServerDisconnect;
- (oneway void)setVoLTECallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setWiFiCallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)setWiFiCallingRoamingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;
- (oneway void)setThumperCallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;
- (oneway void)setThumperCallingAllowed:(_Bool)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3;
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;
- (oneway void)requestPinFromPrimaryDevice;
- (oneway void)cancelPinRequestFromPrimaryDevice;
- (void)performDelegateCallbackBlock:(CDUnknownBlockType)arg1;
- (oneway void)setRelayCallingEnabled:(_Bool)arg1;
- (oneway void)setRelayCallingEnabled:(_Bool)arg1 forDeviceWithID:(id)arg2;
- (oneway void)endEmergencyCallbackMode;
- (void)_retrieveState;
- (id)asynchronousServer;
- (void)_updateState:(id)arg1;
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (oneway void)capabilityStateUpdated:(id)arg1;
- (id)asynchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;

@end
