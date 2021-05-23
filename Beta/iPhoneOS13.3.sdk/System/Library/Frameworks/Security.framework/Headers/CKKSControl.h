/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_xpc_object;

@interface CKKSControl : NSObject

{
    _Bool _synchronous;
    NSObject<OS_xpc_object> *_endpoint;
    NSXPCConnection *_connection;
}

@property _Bool synchronous;
@property (retain) NSObject<OS_xpc_object> *endpoint;
@property (retain) NSXPCConnection *connection;

+ (id)controlObject:(id *)arg1;
+ (id)CKKSControlObject:(_Bool)arg1 error:(id *)arg2;

- (id)initWithConnection:(id)arg1;
- (id)objectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)rpcStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcFastStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcResetLocal:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcResetCloudKit:(id)arg1 reason:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)rpcResync:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcFetchAndProcessChanges:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcFetchAndProcessClassAChanges:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcPushOutgoingChanges:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcCKMetric:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)rpcPerformanceCounters:(CDUnknownBlockType)arg1;
- (void)rpcGetCKDeviceIDWithReply:(CDUnknownBlockType)arg1;
- (void)rpcTLKMissing:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)rpcKnownBadState:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
