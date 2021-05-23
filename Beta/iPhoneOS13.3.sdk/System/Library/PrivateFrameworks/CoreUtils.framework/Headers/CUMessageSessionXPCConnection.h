/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUMessageSessionServer, NSMutableSet, NSXPCConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CUMessageSessionXPCConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidated;
    NSMutableSet *_registeredRequestIDs;
    CUMessageSessionServer *_server;
    NSXPCConnection *_xpcCnx;
}

- (void)remoteSendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)remoteRegisterRequestID:(id)arg1 options:(id)arg2;
- (void)connectionInvalidated;

@end
