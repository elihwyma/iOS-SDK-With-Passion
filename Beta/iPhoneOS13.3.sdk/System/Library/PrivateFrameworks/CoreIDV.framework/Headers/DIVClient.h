/*
 Image: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
 */

#import <Foundation/NSObject.h>

@class DIVerificationSessionContext, NSMutableSet, NSString, NSXPCConnection;

@protocol DIVerificationServerSideProtocol;

__attribute__((visibility("hidden")))
@interface DIVClient : NSObject

{
    unsigned long long _state;
    NSXPCConnection *_serverConnection;
    DIVerificationSessionContext *_context;
    id <DIVerificationServerSideProtocol> _remoteObjectProxy;
    NSMutableSet *_disconnectionCallbacks;
    _Bool _isDisconnected;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)performVerificationWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareVerificationResultWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configure:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVerificationResultWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)concludeVerification:(id)arg1;
- (id)createDaemonDisconnectedError;

@end
