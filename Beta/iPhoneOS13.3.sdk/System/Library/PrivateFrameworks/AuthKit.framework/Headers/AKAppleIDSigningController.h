/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class AKAppleIDAuthenticationController, NSXPCConnection, NSXPCListenerEndpoint;

@protocol OS_dispatch_queue;

@interface AKAppleIDSigningController : NSObject

{
    struct os_unfair_lock_s _signerLock;
    NSObject<OS_dispatch_queue> *_signingQueue;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSXPCConnection *_connection;
    _Bool _isProxy;
    AKAppleIDAuthenticationController *_authenticationController;
}

@property (retain, nonatomic) AKAppleIDAuthenticationController *authenticationController;
@property (nonatomic) _Bool isProxy;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (void)_connectionInvalidated;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (void)signaturesForData:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_connectionInterrupted;
- (void)absintheSignatureForData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_additionalAbsintheHeadersForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_additionalAttestationHeadersForRequest:(id)arg1 withInterval:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signingHeadersForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
