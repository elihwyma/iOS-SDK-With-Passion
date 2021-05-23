/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface AFSiriActivationConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (id)_connection;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (oneway void)prewarmWithRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)activateWithRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)deactivateForReason:(long long)arg1 options:(unsigned long long)arg2 analyticsContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (oneway void)handleContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)handleIntent:(id)arg1 inBackgroundAppWithBundleId:(id)arg2 reply:(CDUnknownBlockType)arg3;

@end
